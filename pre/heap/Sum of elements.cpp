//sum of elements between k1 smallest and k2 smallest elements

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{1,3,12,5,15,11};
    priority_queue<int>maxh;
    
    for(int i=0;i<arr.size();i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>6)
            maxh.pop();
    }
    int e=maxh.top();
    maxh.pop();
    while(maxh.size()!=3)
        maxh.pop();
    int s=maxh.top();
    
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>s && arr[i]<e)
            ans+=arr[i];
    }
    cout<<ans;
    
}
