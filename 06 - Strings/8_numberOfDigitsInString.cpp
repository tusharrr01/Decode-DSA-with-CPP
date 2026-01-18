// return the total number pf digits in number without using any loop.
// Hint : try using inbuilt to_string() function 

#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;

    string s = to_string(num);
    cout<<"number of Digits : "<<s.size();
}