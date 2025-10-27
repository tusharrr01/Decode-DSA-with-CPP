#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    
    //input
    cout<<"enter the values of array : ";
    for(int i= 0 ;i<= n-1;i++){
        cin >> arr[i];
    }

    //sum
    int sum = 0 ;
    for(int i= 0 ;i<= n-1;i++){
        sum += arr[i];
    }

    cout<<"sum of array : "<<sum;
}