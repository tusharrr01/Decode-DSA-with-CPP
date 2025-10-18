#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout << "enter any one latter (A-Z):";
    cin>>ch;

    int position = ((int)ch)-64;

    cout << "the position of this latter is :" << position<< endl;


}