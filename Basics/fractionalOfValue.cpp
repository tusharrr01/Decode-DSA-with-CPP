#include<iostream>
using namespace std;
int main(){
    float a;
    cout << "enter the float value :";
    cin>>a;

    int b = (int)a;

    float  fractional = a-b;

    cout << "fractional of given value is :"<< fractional;


}