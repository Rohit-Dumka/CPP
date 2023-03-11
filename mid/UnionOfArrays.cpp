#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>a{1,2,3,4,5,3,6,5};
vector<int>b{3,3,4,5,9,11};
vector<int>ans;
cout<<"hello"<<endl;
sort(a.begin(),a.end());

for(int i=0;i<a.size();i++){
    if(i>1 && a[i-1]==a[i]){
        continue;
    }
    ans.push_back(a[i]);
}
cout<<endl;
int k=ans.size();
for(int i=0;i<b.size();i++){
    for(int j=0;j<k;j++){
        if(b[i]==ans[j])
            b[i]=INT_MIN;
    }
    if(b[i]!=INT_MIN){
        ans.push_back(b[i]);
    }
}
for(auto x: ans)
    cout<<x<<" ";
}
