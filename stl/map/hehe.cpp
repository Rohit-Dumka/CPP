#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m;
    int a[]={3,5,11,8,18,2,3,11,2,5,5,5,5};
    for(auto i: a){
        m[i]++;
    }
    for(auto &[i,j]:m){
        cout<<i<<" "<<j<<endl;
    }
}
