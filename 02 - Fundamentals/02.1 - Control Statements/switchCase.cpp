// write a program to input week number(1-7) and print day of the week name using switch case .
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "enter the day number(1-7)";
    cin>>x;
    switch (x){
    case 1:
        cout<<"monday";
        break;
    case 2:
        cout<<"tuesday";
        break;
    case 3:
        cout<<"wednesday";
        break;
    case 4:
        cout<<"thursday";
        break;
    case 5:
        cout<<"friday";
        break;
    case 6:
        cout<<"saturday";
        break;
    case 7:
        cout<<"sunday";
        break;
    default:
        cout<<"invalid input";
        break;
    }
}