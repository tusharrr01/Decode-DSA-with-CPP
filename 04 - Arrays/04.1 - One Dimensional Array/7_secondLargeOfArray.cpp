// find the maximum value of array.
#include <iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    
    //input
    cout<<"enter the values of array : ";
    for(int i= 0 ;i<= n-1;i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    for(int i= 0 ;i<= n-1;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }

    int smax = INT_MIN;
    for(int i= 0 ;i<= n-1;i++){
        if(arr[i]> smax && max != arr[i]){
            smax = arr[i];
        }
    }
    
    cout<< "Second maximum value of array is : " << smax <<endl;
    cout<< "Maximum value of array is : " << max;
}