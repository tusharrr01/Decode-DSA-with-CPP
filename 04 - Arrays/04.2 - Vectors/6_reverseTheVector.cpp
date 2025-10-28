// wrirte a prgram to copy the contents of on array(vector) into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;

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

    // reversing into v2 
    vector<int> v2;
    for(int i=v.size()-1;i>=0;i--){
        v2.push_back(v.at(i));
    }

    // print v2
    cout<<"reversed : ";
    for(int i=0;i<v.size();i++){
        cout<<v2[i]<< " ";
    }
}