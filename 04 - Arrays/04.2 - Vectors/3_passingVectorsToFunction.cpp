#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& fv){
    fv.at(3) = 10;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);

    for (int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    change(v);
    
    for (int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
    
}