// input a string and return the number oo times the neighbouring characters are different from each others.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter your string : ";
    cin>>s;
    int count = 0 ;
    int n = s.size();
    
    for(int i=0;i<n;i++){
        if(n==1){ // if length is 1 
            break;
        }
        if(n==2 && s[0]!=s[1]){ // if length is 2
            count++;
            break;
        }
        if(i==0){ // checks 1st index
            if(s[i]!=s[i+1]) count++;   
        }
        else if(i==n-1){ // checks last index 
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
    }
    cout<<"count :" <<count;
}