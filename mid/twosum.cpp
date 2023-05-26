#include <bits/stdc++.h>
using namespace std;
vector<int> p(vector<int>&v,int target)
{
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++)
    {
        if(m.find(target-v[i])!=m.end())
        {
            ans.push_back(m[target-v[i]]);
            ans.push_back(i);
            return ans;
        }
        m[v[i]]=i;
    }
}
int main() 
{
    vector<int>v{4,8,9,3,15,6,11};
    int target=14;
    vector<int>a=p(v,target);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
}
