// print the given pattern : Number Bridge
// here , n isequel to 4
// 1 2 3 4 5 6 7 
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows :";
    cin >> n;
    for(int i=1;i<=(n*2-1);i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=i;j<=n-1;j++){
            cout<<a<<" ";
            a++;
        }       
        for(int k = 1;k<=(i*2-1);k++){
            cout<<"  ";
            a++;
        }
        for(int q=i;q<=n-1;q++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

