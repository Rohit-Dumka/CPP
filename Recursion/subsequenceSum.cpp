//1. brutforce
//2. optimised
//3. first subsequence with sum k


//1
#include <iostream>
#include<vector>
using namespace std;
void f(vector<int>a,int i,vector<int>temp,vector<vector<int>>&ans){
    if(i==a.size()){
        ans.push_back(temp);
        return;
    }
    
    temp.push_back(a[i]);
    f(a,i+1,temp,ans);
    temp.pop_back();
    f(a,i+1,temp,ans);
}
int main() {
    int n,x,k,sum=0;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    cout<<"enter elements: ";
    vector<int>a,temp;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<endl;
    f(a,0,temp,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            sum+=ans[i][j];
        }
        if(sum==k){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        sum=0;
    }
}


//2
#include <iostream>
#include<vector>
using namespace std;
void f(vector<int>a,int i,vector<int>temp,int sum,int k){
    if(i==a.size()){
        if(sum==k){
            for(int i:temp) cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    sum+=a[i];
    temp.push_back(a[i]);
    f(a,i+1,temp,sum,k);
    sum-=a[i];
    temp.pop_back();
    f(a,i+1,temp,sum,k);
}
int main() {
    int n,x,k,sum=0;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    cout<<"enter elements: ";
    vector<int>a,temp;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<endl;
    f(a,0,temp,0,k);
}


//3

#include <iostream>
#include<vector>
using namespace std;
bool f(vector<int>a,int i,vector<int>temp,int sum,int k){
    if(i==a.size()){
        if(sum==k){
            for(int i:temp) cout<<i<<" ";
            return true;
        }
        else return false;
    }
    sum+=a[i];
    temp.push_back(a[i]);
    if(f(a,i+1,temp,sum,k)==true) return true;
    sum-=a[i];
    temp.pop_back();
    if(f(a,i+1,temp,sum,k)==true) return true;
    return false;
}
int main() {
    int n,x,k,sum=0;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    cout<<"enter elements: ";
    vector<int>a,temp;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<endl;
    f(a,0,temp,0,k);
}
