#include<iostream>
using namespace std;
void find(int n,int* lastDigit , int* firstDigit){
    *lastDigit = n%10;
    while(n>9){
        n/=10;
    }
    *firstDigit = n;
}

int main(){
    int n;
    cout <<"Enter Two Number :";
    cin>>n;
    int lastdigit,firstDigit;

    find(n,&lastdigit,&firstDigit);
    cout<<firstDigit << " " << lastdigit;
}