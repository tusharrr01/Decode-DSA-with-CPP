// column wise wawe printing 
// ↓  →  ↓    1 2 3     1 4 7 
// ↓  ↑  ↓  > 4 5 6  >  8 5 2
// →  ↑  ↓    7 8 9     3 6 9

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
    cout<<"\n\n";
    
    bool check = true;
    for(int i=0;i<n;i++){
        if(check){
            for(int j=0;j<n;j++){
                cout<<arr[j][i]<< " ";
            }
            check = false;
        }else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i]<< " ";
            }
            check = true;
        }
        cout<<endl;
    }
}


