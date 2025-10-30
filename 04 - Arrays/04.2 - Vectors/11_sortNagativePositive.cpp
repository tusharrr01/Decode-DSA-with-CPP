// sorts the array(vector) in zero's and one's
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>& v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]<0 && v[j]>=0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        if(v[i]>=0) i++;
        if(v[j]<0)j--;
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

    sort(v); 

    // print 
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i] << " ";
    }
}