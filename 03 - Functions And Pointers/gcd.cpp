// write a function to calculate greatest common divisor of two numbers

#include<iostream>
using namespace std;
int gcd(int a , int b){
    for(int i = min(a,b); i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}   
int main(){
    int a,b;
    cout<<"Enter two numbers to find GCD: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b)<<endl;
}