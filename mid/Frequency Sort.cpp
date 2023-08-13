#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{1,1,1,3,2,2,4};

    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>maxh;
    

    for(int i=0;i<arr.size();i++)
        mp[arr[i]]++;
        
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        maxh.push({i->second,i->first});
    }
    
    while(maxh.size()>0)
    {
       int freq=maxh.top().first;
       int ele=maxh.top().second;
       
        for(int i=1;i<=freq;i++)
            cout<<ele<<" ";
        maxh.pop();
    }
}
