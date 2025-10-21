#include<iostream>
using namespace std;
int main(){
    int i = 11;
    do{
        cout<< i<<endl;
        i++;
    }while (i <= 10);
}  // prints only 11 one time because the condition is checked after the loop body