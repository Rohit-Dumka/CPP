#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5};
    priority_queue<int,vector<int>,greater<int>>minh;
    
    for(int i=0;i<arr.size();i++)
    {
        minh.push(arr[i]);
    }
    int ans=0;
    while(minh.size()>=2)
    {
        int first=minh.top();
        minh.pop();
        int second=minh.top();
        minh.pop();
        ans+=first+second;
        minh.push(first+second);
    }
    cout<<ans;
}
