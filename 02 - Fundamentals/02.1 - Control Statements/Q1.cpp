// take possitive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include<iostream>
using  namespace std;
int main(){
    int num;
    cout<< "enter a number :";
    cin>>num;

    // cout<<a<<endl;
    if((num%3==0 || num%5==0) && num%15!=0){
        cout<< "true";
    }else cout<< "false";
    

}