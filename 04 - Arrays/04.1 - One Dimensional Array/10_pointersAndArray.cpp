#include<iostream>
using namespace std;
int main(){

    // method one 
    int arr[5] = {1,4,67,2,8};
    int* ptr = arr;
    for(int i= 0 ; i <= 4;i++){
        cout<<*ptr<<" ";
        ptr++;  // move to next memory location
    }
    ptr = arr;  // reset pointer

    // method two 
    *ptr = 8; // arr[0] = 8
    ptr++;
    *ptr = 7; // arr[1] = 7
    ptr--;
    cout<<endl;
    for(int i= 0 ; i <= 4;i++){
        cout<<*ptr<<" ";
        ptr++;  // move to next memory location 
    }
    ptr = arr; // reset pointer


}
