#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{7,10,20,5,13,9};
    priority_queue<int,vector<int>,greater<int>>minh;
    int k=3;
    
    for(int i=0;i<v.size();i++)
    {
        minh.push(v[i]);
        if(minh.size()>k)
            minh.pop();
    }
    
    while(minh.size()>0)
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }
}
