#include <iostream>
using namespace std;
int main(){

    int a =  10;
    int* p = &a;
    
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Value of a using pointer: "<<*p<<endl;
    cout<<"Address of a using pointer: "<<p<<endl;

    a= 100;
    cout<<"New value of a: "<<a<<endl;
    cout<<"Value of a using pointer: "<<*p<<endl;

    cout<<endl;

    *p = 20;
    cout<<"New value of a after modifying through pointer: "<<a<<endl;


}