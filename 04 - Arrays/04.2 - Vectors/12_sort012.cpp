// sorts the array(vector) in zero's and one's
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>& nums){
    int a = 0;
    int b = 0;
    int c = 0;
    int size = nums.size();
    for(int i=0;i<size;i++){
        if(nums[i]==0){
            a++;
        }else if(nums[i]==1){
            b++;
        }else{
            c++;
        }
    }
    for(int i=0;i<size;i++){
        if(a>0){
            nums[i]=0;
            a--;
        }else if (b>=1){
            nums[i]=1;
            b--;
        }else{
            nums[i]=2;
            c--;
        }
    }
}
void dutchFlag(vector<int>& nums){
   int lo=0;
   int mid = 0;
   int hi= nums.size()-1;
   while(mid<=hi){
    if(nums[mid]==2){
        int temp = nums[mid];
        nums[mid]=nums[hi];
        nums[hi] = temp;
        hi--;
    }
    else if(nums[mid]==0){
        int temp = nums[mid];
        nums[mid]=nums[lo];
        nums[lo] = temp;
        mid++;
        lo++;
    } else mid++;
   }
   return;
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

    // sort(v); // two pass solution 
    dutchFlag(v); // one pass solution : Dutch Flag Algorithm

    // print 
    for(int i=0;i<=size-1;i++){
        cout<<v[i] << " ";
    }
}