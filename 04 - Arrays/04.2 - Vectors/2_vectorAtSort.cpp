#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(10);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}