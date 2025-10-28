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

    // reversing : using for loop
    int x = v.size()-1;
    for(int i=0;i<=v.size()-1;i++){
        if(i==x) break;
        int temp = v.at(x);
        v.at(x) = v.at(i);
        v.at(i) = temp;
        x--;
    }
    
    // reversing : using while loop
    // int start = 0;
    // int end = v.size()-1;
    // while(start < end){
    //     int temp = v.at(start);
    //     v.at(start) = v.at(end);
    //     v.at(end) = temp;
    //     start++;
    //     end--;
    // }

    // print 
    cout<<"The reversed vector : ";
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<" ";
    }
}