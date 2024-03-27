//memoization(O(n) , O(n)
//tabulation(O(n),O(n))
//tabulation optimized(sc: O(1))

//memoization
#include<bits/stdc++.h>
using namespace std;
int f(int n, vector<int>&dp){
    if(n<=1) return n;
    
    if(dp[n]!=-1) return dp[n];
    
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<f(n,dp);
}

//tabulation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[n];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}

//optimized one

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    cout<<prev;
}
