#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v2.swap(v);
    cout<<"v=>\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"v2=>\n";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}
