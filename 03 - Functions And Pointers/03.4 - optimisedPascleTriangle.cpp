#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int i = 0 ; i <= n ; i++){
        int c = 1; // first value in a line is always 1
        for(int k =1 ; k <= n - i ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j<= i ; j++){
            cout<< c << " ";
            c = c * (i - j) / (j + 1); // calculating next value using previous value
        }
        cout<< endl;
    }
}