// find the element x in the array.
#include <iostream>
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

    int search;
    cout<<"enter the number you want to search : ";
    cin >> search;

    bool flag = 1;
    for(int i= 0 ;i<= n-1;i++){
        search == arr[i]?flag=1:flag = 0;
    }
    flag? cout<<"present": cout<<"not present";
}