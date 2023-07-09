//length of the longest subarray whose sum is less than or equal to k.

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
    vector<int>v{3,1,2,7,4,2,1,1,5};
    int curr=0,l=0,ans=0;
    int k=8;
    for(int r=0;r<v.size();r++)
    {
        curr+=v[r];
        while(curr>k)
        {
            curr-=v[l];
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}
