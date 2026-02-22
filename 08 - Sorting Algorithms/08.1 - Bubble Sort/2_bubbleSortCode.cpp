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

    // bubble sort
    // for(int i = 0;i<n-1;i++){
    //     // array traveling
    //     for(int j=0;j<n-1-i;j++){
    //         if(v[j]>v[j+1]){ // swap
    //             swap(v[j],v[j+1]);
    //         }
    //     }
    // }
    // T.C. = O(n2)
    // S.C. = O(1)
    

    // bubble sort Optimised
    for(int i = 0;i<n;i++){
        // array traveling
        bool flag=true;
        for(int j=0;j<n-i;j++){
            if(v[j]>v[j+1]){ // swap
                swap(v[j],v[j+1]);
                flag = false;
            }
        }
        if(flag == true){ 
            break;
        }
    }
    // T.C. = O(n2)
    // S.C. = O(1)


    for(int i = 0 ;i<n;i++){
        cout<<v[i]<<" ";
    }
}