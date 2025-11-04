// given an array of marks of student , if the marks of any student is less than 35 print it's roll number.[roll number here referse to the index of the array]

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Student :";
    cin>>n;
    int marks[n];
    
    cout<<"Enter the marks :";
    // input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }

    // output
    cout<<"roll Numbers : ";
    for(int i=0;i<=n-1;i++){
        if(marks[i] > 35){
            cout<<i << " ";
        }
    }
}