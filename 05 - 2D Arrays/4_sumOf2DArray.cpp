#include<iostream>
using namespace std;
int main(){

    int m; // number of Cows 
    int n; // number of Columns
    cout<< "Enter The Number Of Rows And Columns : ";
    cin>>m>>n;
    int arr[m][n];

    cout<<"enter the elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }

    cout<<"Sum Of 2D Array : "<< sum;
}