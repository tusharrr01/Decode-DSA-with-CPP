#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(1);


    cout<<endl;
    cout<<v.size()<<endl;        
    cout<<v.capacity()<<endl;

    cout<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    
    cout<<endl;
    cout<<v[2]<<endl;
    v[2] = 8;
    cout<<v[2];
}