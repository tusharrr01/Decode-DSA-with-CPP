// leetcode 31

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& v){
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;
    for(int i = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx= i;
            break;
        }
    }
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
    }

    reverse(nums.begin()+idx+1 , nums.end());

    int j = -1;
    for(int i = idx+1;i<n;i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
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

    nextPermutation(v);

    display(v);
}

