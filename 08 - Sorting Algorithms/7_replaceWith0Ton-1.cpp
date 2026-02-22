#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = { 26 , 45 , 2 , 10 , -1 , 4};
    int n = 6;
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    vector<int> v(n,0);
    int x=0;

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindex = -1;
        for(int j=0;j<n;j++){
            if(v[j] == 1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindex = j;
                }
            }
        }
        arr[mindex] = x;
        v[mindex] = 1; // visited index
        x++;
    }

    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }

}