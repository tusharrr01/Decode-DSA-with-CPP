#include<iostream>
using namespace std;

void printTriangle() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i = 0 ; i < n;i++){
        for(int j= 0 ; j <= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    printTriangle();
    printTriangle();
    printTriangle();
    printTriangle();
}