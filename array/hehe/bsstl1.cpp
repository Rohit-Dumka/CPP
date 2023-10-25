#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,5,8,9};
   int n=sizeof(a)/sizeof(int);
   bool res=binary_search(a,a+n,3);
   
   if(res) cout<<"found";
   else cout<<"not found";
   
   res=binary_search(a,a+n,4);
   
   if(res) cout<<"\nfound";
   else cout<<"\nnot found";
}
