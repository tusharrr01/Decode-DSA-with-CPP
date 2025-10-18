#include<iostream>
using namespace std;
int main(){
    float english = 63;
    float gujarati = 74;
    float math = 91;
    float science = 88;
    float account = 75;

    float percentage = ( english + gujarati +  math + science + account) / 5 ;

    cout << "total percentage of subjects is : " << percentage << endl ;
}