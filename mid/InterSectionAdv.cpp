#include<iostream>
#include<vector>//to use vector
#include<algorithm>//to perform sorting
using namespace std;

int main(){
vector<int>a{1,2,3,3,4,5,1,5}; //first array
vector<int>b{3,3,5,4,4,5,6}; //second array

vector<int>ans;
sort(a.begin(),a.end());
sort(b.begin(),b.end());

for(int i=0;i<a.size();i++){
        if(i>1 && a[i-1]==a[i]){//for dups in a
            continue;
        }
    for(int j=0;j<b.size();j++){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            break;//for dups in b
        }
    }
}
for(auto x:ans){
    cout<<x<<" ";
}

}
