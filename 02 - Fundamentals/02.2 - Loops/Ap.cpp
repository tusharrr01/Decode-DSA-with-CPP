#include<iostream>
using  namespace std;
int main(){
    cout << "enter the value of N : ";
    int N;
    cin >> N;

    // 3 6 9 12 .... N times
    // for(int i= 1; i<=N; i++){
    //     cout<< i*3 << " ";
    // }



    // 100 97 94 .... N times
    int a=100;
    for(int i=0; i<N; i++){
        cout<< a - (i*3) << " ";
    }

}