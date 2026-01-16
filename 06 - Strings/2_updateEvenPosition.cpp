// input a string of size n and Update all the even position in the string to charecter 'a'. consider 0-based indexing.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of string : ";
    cin >> n;

    char str[n + 1];
    cout << "enter your string : ";
    for (int i = 0; i < n; i++){
        cin >> str[i];
    }
    str[n] = '\0';
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            str[i] = 'a';
        }
    }

    cout << "final string : " << str;
}