#include <iostream>
using namespace std;
int main(){

    int a ,b;
    int* p = &a;
    int* q = &b;

    cout<<"Enter first numbers: ";
    cin>>*p;
    cout<<"Enter second numbers: ";
    cin>>*q;

    cout<<"Sum: "<<(a + b)<<endl;

}