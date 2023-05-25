#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v{1,3,1,1,5,2,3};
    map<int,int>m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
}
