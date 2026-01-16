#include<iostream>
#include<string>
#include<algorithm>  // reverse method
using namespace std;
int main(){
    string s = "today is good day..";
    cout<<s.length()<<endl;  // it does not include "\0"
    cout<<s.size()<<endl;  // it does not include "\0"
    
    string str = "la laa";
    cout<<str<<endl;
    str.push_back(' ');
    str.push_back('l');
    cout<<str<<endl;
    str.push_back('a');
    cout<<str<<endl;
    str.push_back('a');
    str.push_back('a');
    cout<<str<<endl;
    str.pop_back();
    str.pop_back();
    cout<<str<<endl;

    string s1 = "abcd";
    cout<<s1<<endl;
    s1 = s1 + "efgh";
    cout<<s1<<endl;
    
    string s2 = "abcdefghijklmnopqrstuvwxyz";
    cout<<s2<<endl;
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    reverse(s2.begin()+5,s2.end()-8);
    cout<<s2<<endl;
    reverse(s2.begin(),s2.begin()+5); // index +1 : abcd
    cout<<s2<<endl;
}