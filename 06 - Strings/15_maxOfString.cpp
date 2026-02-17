// given n strings consisting of digit from 0 to 9.return the index of string which has maximum value.(take 0 based indexing)
// input : 1234 , 0023 , 456 , 940 , 2901
// output : 5

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string arr[] = {"1234" , "0023" , "456" , "940" , "002801"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i=1;i<5;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxS = arr[i];
        }
    }
    cout<<maxS;
}