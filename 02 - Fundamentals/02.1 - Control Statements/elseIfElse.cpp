#include<iostream>
using  namespace std;
int main(){
    int mark;
    cout<< "enter your mark :";
    cin>>mark;

    // cout<<a<<endl;

    
    if(mark > 90){
        cout<< "A+ Grade";
    }else if(mark >80){
        cout<< "A Grade";
    }else if(mark >70){
        cout<< "B Grade ";
    }else if(mark >60){
        cout<< "C Grade";
    }else if(mark > 33){
        cout<< "passed";
    }else{
        cout<< "failed";
    }
    
    // // short way of writing single line condition 
    // if(mark > 90) cout<< "A+ Grade";
    // else if(mark >80) cout<< "A Grade";
    // else if(mark >70) cout<< "B Grade ";
    // else if(mark >60) cout<< "C Grade";
    // else if(mark > 33) cout<< "passed";
    // else cout<< "failed";
    
}