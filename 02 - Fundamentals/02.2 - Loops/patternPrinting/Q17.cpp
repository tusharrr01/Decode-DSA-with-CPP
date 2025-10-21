// print the given pattern : Star Bridge
// here , n isequel to 4 
// * * * * * * * 
// * * *   * * *
// * *       * *
// *           *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows :";
    cin >> n;
    for(int i=1;i<=(n*2-1);i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"* ";
        }       
        for(int k = 1;k<=(i*2-1);k++){
            cout<<"  ";
        }
        for(int q=n-1;q>=i;q--){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// alternaive way of Loop

// for(int q=i;q<=n-1;q++){
//     cout<<"*";
// }