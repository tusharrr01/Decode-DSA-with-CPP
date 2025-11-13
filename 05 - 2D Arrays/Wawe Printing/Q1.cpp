// →  →  ↓    1 2 3     7 8 9 
// ↓  ←  ←  > 4 5 6  >  6 5 4
// →  →  →    7 8 9     1 2 3


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

    for(int i=0;i<m;i++){
        if(i%2 == 0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<< " ";
            }
        }else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<< " ";
            }
        }
        cout<<endl;
    }
}