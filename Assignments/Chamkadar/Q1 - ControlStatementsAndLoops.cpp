#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value you want :";
    cin>>n;
    int prevDigit = 0;
    int lastDigit = 0 ;
    int ans = 0;
    int even_num = 0;
    int temp = 1;
    int finalAns = 0 ;
    while(n > 0 ){
        lastDigit = n % 10;
        // cout << "prevDigit  :" << prevDigit<< endl;
        
        // even check 
        if(lastDigit %2 == 0 ){ 
            if(prevDigit == 0){
                even_num++;
            }else{
                if(prevDigit < lastDigit){
                    ans = (ans * 10) + lastDigit;
                }
                even_num++;
            }
            prevDigit = lastDigit;
        }

        // odd check 
        if(lastDigit %2 != 0 ){
            if(prevDigit != 0){
                temp = lastDigit * even_num ;
                if(temp >= 10 ){
                    while (temp > 0 ){
                     ans = (ans * 10);
                     int last = temp % 10;
                     ans += last;
                     temp /= 10;
                    }
                }else{
                    ans = (ans * 10) + temp;
                }
            }
            prevDigit = lastDigit;
        }
        n = n / 10;
        
        // cout << "lastDigit  :" << lastDigit<< endl;
        // cout << "even  :" << even_num << endl;
        // cout << "temp  :" << temp << endl;
        // cout << "ans :" << ans<<endl;
        // cout<<"\n\n";
    }
    while (ans > 0){
        int temp  = ans % 10;
        finalAns = (finalAns * 10) + temp ;
        ans = ans / 10 ;
    }
    cout << "final Ans :" << finalAns;
}