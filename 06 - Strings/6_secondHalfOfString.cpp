// input a string of even size and return the second half of that string using inbult method substr().

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string (even size) : ";
    getline(cin,str);
    if(str.size()%2!=0){
        cout<<"string is not even :(";
        return 1;
    }

    string res = str.substr(str.size()/2);
    cout<<"Second half of your String is : "<< res;
    
}