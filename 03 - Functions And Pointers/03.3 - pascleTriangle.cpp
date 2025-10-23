// enter the rows of pascle triangle :4
//     1 
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;
int fact(int x){
    int f = 1 ; 
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}

int combination(int n , int r){
    int ncr = fact(n) / (fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n ;
    cout<< "enter the rows of pascle triangle :";
    cin>>n;
    for(int i = 0 ; i <= n ; i++){
        for(int k =1 ; k <= n - i ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j<= i ; j++){
            cout<< combination(i , j) << " ";
        }
        cout<< endl;
    }
}