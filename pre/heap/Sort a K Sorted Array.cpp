#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{6,5,3,2,8,10,9};
    int k=3;
    
    priority_queue<int,vector<int>,greater<int>>minh;
    vector<int>ans;
    
    for(int i=0;i<arr.size();i++)
    {
        minh.push(arr[i]);
        while(minh.size()>k)
        {
            ans.push_back(minh.top());
            minh.pop();
        }
    }
    
    while(minh.size()>0)
    {
        ans.push_back(minh.top());
        minh.pop();
    }
    for(int i:ans)
        cout<<i<<" ";
}
