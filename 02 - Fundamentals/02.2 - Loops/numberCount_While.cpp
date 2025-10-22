#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter a positive integer: ";
    cin>>n;
    a = n;
    int count = 0;
    while(n != 0){
        n/=10;
        count++;
    }
    if (a==0)
    {
        cout<<"Total digits: 1"<<endl;
    }else{
    cout<<"Total digits: "<<count<<endl;
    }
}
