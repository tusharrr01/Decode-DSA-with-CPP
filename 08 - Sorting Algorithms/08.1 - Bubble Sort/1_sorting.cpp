#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter the 5 element : ";
    for(int i= 0;i<5;i++){
        cin>>v[i];
    }

    // accending order
    sort(v.begin(),v.end()); // 0(log n)
    
    // decending order
    // sort(v.begin(),v.end()); 
    // reverse(v.begin(), v.end());

    for(int i = 0 ;i<5;i++){
        cout<<v[i]<<" ";
    }
}