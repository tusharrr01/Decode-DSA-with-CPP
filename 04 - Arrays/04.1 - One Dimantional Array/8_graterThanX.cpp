// count the number of elements in given array greater than the given number x.
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

    int x;
    cout<<"enter the values of x : ";
    cin>>x;
    int count = 0;
    for(int i= 0 ;i<= n-1;i++){
        if(arr[i] > x){
            count++;
        }
    }
    cout<< "Numbers that are greater than x in array : " << count;
}