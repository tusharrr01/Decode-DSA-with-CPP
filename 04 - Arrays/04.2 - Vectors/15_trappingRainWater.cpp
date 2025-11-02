// leetcode 42
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int trap(vector<int>& height){
    int n = height.size();

    // Prev greatest element array 
    vector<int> prev(height.size());
    prev.at(0) = -1;
    int max = -1;
    for(int i = 0;i<n;i++){
        prev.at(i) = max;
        if(height[i]>max) max = height[i];
    }

    // Next greatest element array 
    vector<int> next(height.size());
    next.at(n-1) = -1;
    max = height[n-1];
    for(int i =n-2;i>=0;i--){
        next.at(i) = max;
        if(height[i]>max) max = height[i];
    }

    // Calculating the water 
    int water = 0;
    for(int i=0;i<n-1;i++){
        int minimum = min(prev[i],next[i]);
        if(height[i]<minimum){
            water += (minimum-height[i]);
        }
    }
    return water;
}

int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    cout<<"enter the values : ";
    for(int i=0;i<=n-1;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int water = trap(v);
    cout<< "traped water : "<< water; 
}