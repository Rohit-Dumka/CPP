#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>arr{{1,3},{-2,2},{5,8},{0,1}};
    int k=2;

    priority_queue<pair<int,pair<int,int>>>maxh;
    
    for(int i=0;i<arr.size();i++)
    {
        maxh.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
        if(maxh.size()>k)
            maxh.pop();
    }
    
    while(maxh.size()>0)
    {
        pair<int,int>ans=maxh.top().second;
        cout<<ans.first<<" "<<ans.second<<endl;
        maxh.pop();
    }
}
