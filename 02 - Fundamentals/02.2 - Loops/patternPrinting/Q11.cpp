// print the given pattern  : binary triangle
//  1
//  0 1
//  0 1 0
//  1 0 1 0
//  1 0 1 0 1

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number of rows: ";
    cin>>n;
    int a = 1;
    for (int i = 1; i <= n; i++){
        for(int j = 1 ; j <= i ;j++){
            cout<<" "<< a;
            a==0?a=1:a=0;
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the number of rows: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++){
//         for(int j = 1 ; j <= i ;j++){
//             j%2==0?cout<<" 0":cout<<" 1";
//         }
//         cout<<endl;
//     }
// }