// print the given pattern : Star Diamond
// here , n isequel to 3 
//      *
//    * * *
//  * * * * *
//    * * *
//      *


#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number of rows: ";
    cin>>n;
    int nsp = n-1; // number of spaves
    int nst = 1; // number of stars 

    for (int i = 1; i <= n*2; i++){
        if (i < (n)){
            for(int j = 1 ; j <= nsp ;j++){
                cout<< "  ";
            }
            nsp--;
            for(int k = 1 ; k <= nst ;k++){
                cout<< " *";
            }
            nst+=2;
        }else{
            for(int j = 1 ; j <= nsp ;j++){
                cout<< "  ";
            }
            nsp++;
            for(int k = 1 ; k <= nst ;k++){
                cout<< " *";
            }
            nst-=2;
        }
        
        cout<<endl;
    }
}