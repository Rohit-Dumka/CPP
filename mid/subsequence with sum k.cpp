//print first subsequence with sum k
#include <bits/stdc++.h>
using namespace std;
bool print(int i,vector<int>&a,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            for(int x:a)
                cout<<x<<" ";
            cout<<endl;
            return true;
        }
        else
            return false;
    }
    
    a.push_back(arr[i]);
    s+=arr[i];
    
    if(print(i+1,a,s,sum,arr,n)==true)
        return true;
    
    s-=arr[i];
    a.pop_back();
    
    if(print(i+1,a,s,sum,arr,n)==true)
        return true;
    return false;
}
int main() {
   int arr[]={1,2,1};
   int n=3;
   int sum=2;
   vector<int>a;
   print(0,a,0,sum,arr,n);
}
