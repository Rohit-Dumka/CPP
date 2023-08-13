#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{5,6,9,8,7};
    int x=7,k=3;
    //find k(3) closest numbers from x
    //means no with minimum difference from arr[i]-x
    //that means we are going to use max heap again.
    priority_queue<pair<int,int>>ans;
    
    
    for(int i=0;i<arr.size();i++)
    {
        ans.push({abs(arr[i]-x),arr[i]});
        while(ans.size()>k)
            ans.pop();
    }
    
    while(ans.size()>0)
    {
        cout<<ans.top().second<<" ";
        ans.pop();
    }
}
