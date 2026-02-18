#include<iostream>
#include<algorithm>
using namespace std;


int countDigits(int n){
    int length = 0;
    while(n > 0){
        length++;
        n = n/10; 
    }
    return length;
}

void splitTwo(int n , int*S , int*P, int length){
    *S = n;
    int size = length/2;
    for(int i=0;i<(length-size);i++){
        *S /= 10;
    }
    
    for(int i=0;i<size;i++){
        *P *= 10;
        *P += n%10;
        n /= 10;
    }
}

int sumOfDigit(int *S){
    int temp = 0;
    while(*S > 0){
        int lastDigit = *S%10;
        temp += lastDigit;
        *S /= 10;
        
    }
    *S = temp;
}

int productOfDigit(int *P){
    int temp = 1;
    while(*P > 0){
        int lastDigit = *P%10;
        temp *= lastDigit;
        *P /= 10;
    }
    *P = temp;
}

void Transformer(int* n,int *Transformations){

    while(*n > 9){
        *Transformations += 1;

        int length = countDigits(*n);

        if(length == 1) break;

        int S = 0;
        int P = 0;
        splitTwo(*n,&S,&P,(length));
        
        sumOfDigit(&S);
        productOfDigit(&P);
        // cout<<"S : "<<S<<endl<<"P : "<<P<<endl;    
        
        if(S > P){
            *n = S - P;
        }else if( P > S){
            *n = P - S;
        }else{
            *n = P + S;
        }
        // cout<<"Final number = "<< *n <<endl;
    }   
}

int main(){
    int n;
    cout<<"Enter the value you want :";
    cin>>n;
    // cout<<"n : "<<n<<endl;

    int Transformations = 0;
    int finalNumber = 10;
    
    Transformer(&n,&Transformations);

    cout<<"Transformations = "<< Transformations<<endl;
    cout<<"Final number = "<< n <<endl;
} 