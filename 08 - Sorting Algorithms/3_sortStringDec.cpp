#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    string str;
    getline(cin,s);
    int n = s.size();

    for(int i = 0;i<n;i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;
    
    for(int i=0;i<n;i++){

        for(int j=n;j>0+i;j--){
            if(str[j]>str[j-1]){
                int temp = str[j];
                str[j] = str[j-1];
                str[j-1] = temp;
            }
        }
    }
    
    cout<<str<<endl;
    
}