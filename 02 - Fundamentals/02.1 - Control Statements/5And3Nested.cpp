#include<iostream>
using  namespace std;
int main(){
    int a;
    cout<< "enter a number :";
    cin>>a;

    // cout<<a<<endl;
    if(a%5==0){
        if(a%3==0){
            cout<< "divisible by 5  and 3";
        }else{
            cout<< "not divisible by 5 and 3";
        }
    }else{
        cout<< "not divisible by 5 and 3";
    }

}