#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 3;
    arr[3] = 8;
    arr[4] = 1;
    arr[5] = 0;
    // cout<<arr[0]<< " "<<arr[5]; 


    int brr[4] = {5,1,2,3};
    // cout<<brr[0]<< " "<<brr[1]<< " "; 
    // cout<<brr[2]<< " "<<brr[3]<< " "; 

    int crr[7];

    // input
    for(int i = 0 ; i<= 6;i++){
        cin >> crr[i];
    }

    for(int i = 0 ; i<= 6;i++){
        cout<< crr[i]<< " ";
    }
}