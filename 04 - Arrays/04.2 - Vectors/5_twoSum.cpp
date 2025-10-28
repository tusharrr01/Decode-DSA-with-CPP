// find the doublet in the array(vector) whose sum is equal to the given value x. (leetcode - 1) (two sum)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    cout<<"enter the values : ";
    for(int i=0;i<=n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int x;
    cout<<"Enter Traget :";
    cin>>x;

    for(int i=0;i<=v.size()-1;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v.at(j)+v.at(i)==x){
                cout<<"{"<<i<<","<<j<<"}"<<endl;
            }
        }
    }
}