#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5 ,44 ,2 ,1 ,4};
    int n = 5;
    for(int element : arr){
        cout<<element<<" ";
    }
    cout<<endl;

    // selection sort
    for(int i =0;i<n-1;i++){
        int min = INT_MAX;
        int mindex = -1;
        // minimum element calculation on unsorted array
        for(int j = i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindex = j;
            }
        }
        swap(arr[i],arr[mindex]);
    }

    for(int element : arr){
        cout<<element<<" ";
    }
}