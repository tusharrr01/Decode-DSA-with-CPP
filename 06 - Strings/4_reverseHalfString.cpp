// input a string of even length and reverse the first half of the string 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string  str;
    cout<<"enter your string (even size): ";
    getline(cin,str);
    if(str.size()%2!=0) {
        cout<<"string is not even :(";
        return 1;
    }
    reverse(str.begin(),str.begin()+(str.size()/2));

    cout<<"result : " << str;
     
}