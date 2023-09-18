#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main() {
    vector<pair<int,int>>v;
    int n ;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    sort(v.begin(),v.end(),comp);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
