#include<iostream>
using namespace std;
int main(){
    // declaration
    int arr[3][3];
    int b[][3] = {{1,2,3},{4,5,6},{7,8,9}};  // also valid but size of 2nd dimension is mandatory

    // declaration + initialization
    int c[3][3] = {1,2,3,4,5,6,7,8,9};

    // input
    int row, col;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>col;

    int a[row][col];  // VLA - Variable Length Array (allowed in C99, not standard in C++ but supported by some compilers)
    cout<<"Enter the elements of the array:"<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }

    cout<<"You entered:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}