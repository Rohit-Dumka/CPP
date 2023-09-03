//print all subsequences whose sum is k
#include <bits/stdc++.h>
using namespace std;
void print(int i,vector<int>&a,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            for(int x:a)
                cout<<x<<" ";
            cout<<endl;
        }
        return;
    }
    
    a.push_back(arr[i]);
    s+=arr[i];
    
    print(i+1,a,s,sum,arr,n); //take
    
    s-=arr[i];
    a.pop_back();
    
    print(i+1,a,s,sum,arr,n); //not take
}
int main() {
   int arr[]={1,2,1};
   int n=3;
   int sum=2;
   vector<int>a;
   print(0,a,0,sum,arr,n);
}
