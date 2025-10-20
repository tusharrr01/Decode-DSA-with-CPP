#include<iostream>
using  namespace std;
int main(){
    int a;
    cout<< "enter a number :";
    cin>>a;

    // if(a%2==0){
    //     cout<< "given number is even....";
    // }else{
    //     cout<< "given number is odd....";
    // }


    // ternary = condition ? true : false ;
    a%2==0? cout<<"number is even" : cout<<"number is odd";

    //----------------------

    int b = 50;
    char b = a>20?'A':'B';
    cout<< b<<endl;
}