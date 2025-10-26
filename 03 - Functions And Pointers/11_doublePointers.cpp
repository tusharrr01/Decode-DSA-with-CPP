#include <iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x;
    int** ptr1 = &p;
    int*** ptr2 = &ptr1;

    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**ptr1<<endl;
    cout<<***ptr2<<endl;
}