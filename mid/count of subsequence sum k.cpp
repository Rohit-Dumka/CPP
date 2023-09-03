//count of all subsequences whose sum is k
#include <bits/stdc++.h>
using namespace std;
int print(int i,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum)
            return 1;
        else 
            return 0;
    }
    
    s+=arr[i];
    
    int l=print(i+1,s,sum,arr,n);
    
    s-=arr[i];

    int r= print(i+1,s,sum,arr,n);
    return l+r;
}
int main() {
   int arr[]={1,2,1};
   int n=3;
   int sum=2;
   cout<<print(0,0,sum,arr,n);
}
