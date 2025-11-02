// merge two sorted array
#include <iostream>
using namespace std;

void display(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void merge(int arr[], int m, int brr[], int n, int crr[], int size){
    int i = 0, j = 0, k = 0;
    while (i < m && j < n){
        if (arr[i] < brr[j]){
            crr[k] = arr[i];
            i++;
        }
        else{
            crr[k] = brr[j];
            j++;
        }
        k++;
    }
    // remain of arr
    while (i <= m){
        crr[k] = arr[i];
        i++;
        k++;
    }
    // remain of brr
    while (j <= n){
        crr[k] = brr[j];
        j++;
        k++;
    }
}

int main(){
    int arr[] = {4, 5, 7, 8, 16, 19, 22};
    int m = (sizeof(arr) / sizeof(int));

    int brr[] = {2, 6, 9, 15, 18, 20};
    int n = (sizeof(brr) / sizeof(int));

    int size = m + n;
    int crr[size];

    display(arr, m);
    cout << endl;
    display(brr, n);
    cout << endl;

    merge(arr,m,brr,n,crr,size);
    display(crr, size);
    cout << endl;
}