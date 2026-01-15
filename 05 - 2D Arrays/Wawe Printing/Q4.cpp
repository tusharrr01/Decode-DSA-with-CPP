// column wise wawe printing 
// ↓  →  ↓    1 2 3     1 4 7 
// ↓  ↑  ↓  > 4 5 6  >  8 5 2
// →  ↑  ↓    7 8 9     3 6 9

#include<iostream>
using namespace std;
int main(){
    int m; // number of Cows 
    int n; // number of Columns
    cout<< "Enter The Number Of Rows And Columns : ";
    cin>>m>>n;
    int arr[m][n];
    
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n\n";
    
    int minr = 0,minc = 0;
    int maxr = m-1,maxc = n-1;

    while(minr<=maxr && minc <= maxc){ //method 1 : best
        //right
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;

        if(minr>maxr || minc>maxc) break;
        //down 
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc]<<" ";
        }
        maxc--;

        if(minr>maxr || minc>maxc) break;
        //left
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;

        if(minr>maxr || minc>maxc) break;
        //up 
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc]<<" ";
        }
        minc++;
    }
    
    
    int tne = n*m;   
    while(minr<=maxr && minc <= maxc){ //method 2 
        //right
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        //down 
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc]<<" ";
        }
        maxc--;
        //left
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        //up 
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc]<<" ";
        }
        minc++;
    }



}


