// print the given pattern 
//      *
//    * * *
//  * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the number of rows: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++){
//         for(int j = 1 ; j <= n-i ;j++){
//             cout<< "  ";
//         }
//         for(int k = 1 ; k <= (i*2-1) ;k++){
//             cout<< " *";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number of rows: ";
    cin>>n;
    int nsp = n-1; // number of spaves
    int nst = 1; // number of stars 

    for (int i = 1; i <= n; i++){
        for(int j = 1 ; j <= nsp ;j++){
            cout<< "  ";
        }
        nsp--;
        for(int k = 1 ; k <= nst ;k++){
            cout<< " *";
        }
        nst+=2;
        cout<<endl;
    }
}