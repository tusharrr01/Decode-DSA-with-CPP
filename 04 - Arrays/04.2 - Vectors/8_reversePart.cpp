// wrirte a prgram to copy the contents of on array(vector) into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void reverse(vector<int>& v){
    int start = 0;
    int end = v.size()-1;
    while(start < end){
        int temp = v.at(start);
        v.at(start) = v.at(end);
        v.at(end) = temp;
        start++;
        end--;
    }
    cout<<endl;
}

void reversePart(int start, int end , vector<int>& v){
    while(start < end){
        int temp = v.at(start);
        v.at(start) = v.at(end);
        v.at(end) = temp;
        start++;
        end--;
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    // input
    cout<<"enter the values : ";
    for(int i=0;i<=n-1;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    display(v);

    reversePart(0,3,v);
    display(v);

    reverse(v);
    display(v);
}