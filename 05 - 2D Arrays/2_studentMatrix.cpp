// write a program to store roll number and marks obtained by 4 student side by side in a matrix.
#include<iostream>
using namespace std;
int main(){
    int students[4][2];  // 4 students, 1 for roll number and 1 for marks

    for(int i=0; i<4; i++){
        cout<<"Enter roll number and marks for student "<<i+1<<": ";
        cin>>students[i][0]>>students[i][1];
    }

    cout<<"Roll Number\tMarks"<<endl;
    for(int i=0; i<4; i++){
        cout<<students[i][0]<<"\t\t"<<students[i][1]<<endl;  // \t for tab space (tab =  4 spaces)
    }

    return 0;
}