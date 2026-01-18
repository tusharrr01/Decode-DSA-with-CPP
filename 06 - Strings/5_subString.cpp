#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcdefghijklm";
    // str.substr(idx,len);
    // str.substr(idx); till the last 
    cout<<str.substr(5)<<endl;
    cout<<str.substr(2,3);
}