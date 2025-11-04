#include<iostream>
using namespace std;
int main(){
    int m; // number of Cows 
    int n; // number of Columns
    cout<< "Enter The Number Of Rows And Columns : ";
    cin>>m>>n;
    int arr[m][n];
    int brr[m][n];
    int res[m][n];

    cout<<"enter the elements for 1st Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"enter the elements for 2st Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
    
    cout<<"Addition Of Matrices : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }  
}