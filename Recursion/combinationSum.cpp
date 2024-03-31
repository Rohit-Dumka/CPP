//brutforce

#include <iostream>
#include <vector>
using namespace std;
void f(vector<int>&a,vector<int>&temp,vector<vector<int>>&v,int i,int sum,int k){
    
    if(sum==k){
        v.push_back(temp);
        return;
    }
    if(i>=a.size() || sum>k) return;
    
    temp.push_back(a[i]);
    sum+=a[i];
    f(a,temp,v,i,sum,k);
    temp.pop_back();
    sum-=a[i];
    f(a,temp,v,i+1,sum,k);
}
int main() {
    vector<int>a{1,2,3,4,1};
    int k=6;
    vector<int>t;
    vector<vector<int>>ans;
    f(a,t,ans,0,0,k);
    
    for(vector<int>&arr:ans){
        for(int i:arr) cout<<i<<" ";
        cout<<endl;
    }
}


//optimized
#include <iostream>
#include <vector>
using namespace std;
void f(vector<int>&a,vector<int>&temp,vector<vector<int>>&v,int i,int k){
    if(i==a.size()){
        if(k==0){
            v.push_back(temp);
        }
        return;
    }
    
    if(a[i]<=k){
        temp.push_back(a[i]);
        f(a,temp,v,i,k-a[i]);
        temp.pop_back();
    }
    f(a,temp,v,i+1,k);
}
int main() {
    vector<int>a{1,2,3,4,1};
    int k=6;
    vector<int>t;
    vector<vector<int>>ans;
    f(a,t,ans,0,k);
    
    for(vector<int>&arr:ans){
        for(int i:arr) cout<<i<<" ";
        cout<<endl;
    }
}
