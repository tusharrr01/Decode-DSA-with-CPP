// write a program to print the transpose of the matrix enterd by the user and store it in a new matrix.
#include<iostream>
using namespace std;
int main(){
    int n; // number of Cows and Columns
    cout<< "Enter The Number Of Rows And Columns of Square Matrix: ";
    cin>>n;
    int arr[n][n];
    
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for (int i = 1; i < n; i++){
        for(int j = 0 ; j < i ;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}