//push the zeros to end while maintaining the relative order of other element 
// i.g. 
// input : 0 1 0 5 4 2 0 
// o/p   : 1 5 4 2 0 0 0 
// NOT   : 1 2 4 5 0 0 0

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element : ";
    for(int i= 0;i<n;i++){
        cin>>v[i];
    }

    // bubble sort Optimised
    for(int i = 0;i<n;i++){
        // array traveling
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(v[j]== 0){ // swap
                swap(v[j],v[j+1]);
                flag = false;
            }
        }
        if(flag == true){ 
            break;
        }
    }



    for(int i = 0 ;i<n;i++){
        cout<<v[i]<<" ";
    }
}