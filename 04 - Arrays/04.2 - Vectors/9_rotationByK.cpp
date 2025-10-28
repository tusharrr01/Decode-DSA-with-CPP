// rotate the given vector "v" by k steps , where k is non nagative.
// Note : k can be greater than n as well where n is the size of vector "v".

// wrirte a prgram to copy the contents of on array(vector) into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void reversePart(int start, int end , vector<int>& v){
    while(start < end){
        int temp = v.at(start);
        v.at(start) = v.at(end);
        v.at(end) = temp;
        start++;
        end--;
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int size;
    cout<<"enter the size of vector : ";
    cin>>size;

    // input
    cout<<"enter the values : ";
    for(int i=0;i<=size-1;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int k;
    cout<<"enter the steps(k) : ";
    cin>>k;
    int n = v.size();
    
    // method 1              // method 2 
    while(k>n){              // if(k>n) k%=n;
        k-=n;
        cout<<k<< " ";
    }

    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}