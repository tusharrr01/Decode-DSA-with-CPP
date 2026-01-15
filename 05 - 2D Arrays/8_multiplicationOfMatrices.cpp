#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows of 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the columns of 1st Matrix : ";
    cin>>n;
    
    int p;
    cout<<"Enter the rows of 1st Matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the columns of 1st Matrix : ";
    cin>>q;
    if(n==p){
        // input of 1st matrix
        int arr[m][n];
        cout<<"enter the element of 1st matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        // input of 1st matrix
        int brr[p][q];
        cout<<"enter the element of 2nd matrix : ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>brr[i][j];
            }
        }
        // multiply
        int result[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                result[i][j] = 0;
                for(int k=0;k<p;k++){
                    result[i][j]  += (arr[i][k] * brr[k][j]);
                }
            }
        }
        //print 
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<result[i][j]<< " ";
            }
            cout<<endl;
        }
    }else{
        cout<<"matrices can not be multiplied :)";
    }
}