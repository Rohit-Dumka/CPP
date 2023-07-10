//find the maximum subarray sum of length 3

#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v{2,5,7,9,2,1,3};
    int l=0,curr=0,ans=0,count=0;
    for(int r=0;r<v.size();r++)
    {
        curr+=v[r];
        count++;
        while(count>3)
        {
            curr-=v[l];
            l++;
            count--;
        }
        ans=max(ans,curr);
    }
    cout<<ans;
}
