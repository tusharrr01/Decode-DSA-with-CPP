// sorts the array(vector) in zero's and one's
#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& v){
    int noz = 0; // number of zero
    int noo = 0; // number of one
    for(int i=0;i<=v.size();i++){
        v[i]==0?noz++:noo++;
    }
    for(int i=0;i<=v.size();i++){
        if(i<noz){
            v[i] = 0;
            noz--;
        }else{
            v[i] = 1;
            noo--;
        }
    }
}

void sort01(vector<int>& v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1)j--;
    }
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

    // sort(v); // two pass method 
    sort01(v); // two pointer method .here, pointer means variable 

    // print 
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i] << " ";
    }
}