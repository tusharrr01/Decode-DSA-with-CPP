// write a program to find the largest element of a given 2D array(matrix) of integers.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3] = {1,4,7,31,9,1,10,2,4};
    int max = INT_MIN;
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
        
    }
    cout << "Maximum element: " << max << endl;
    return 0;
}