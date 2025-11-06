// write a program to print the transpose of the matrix enterd by the user and store it in a new matrix.

#include<iostream>
using namespace std;
int main(){
    int m; // number of Cows 
    int n; // number of Columns
    cout<< "Enter The Number Of Rows And Columns : ";
    cin>>m>>n;
    int arr[m][n];
    int tr[n][m];
    
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tr[i][j] = arr[j][i];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<tr[i][j]<< " ";
        }
        cout<<endl;
    }
}