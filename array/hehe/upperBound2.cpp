//find the last occurance of a X in a sorted array. If it doesn't exits, print -1
#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,4,4,4,9,10,11};
   int n=sizeof(a)/sizeof(int);
   
   int x=4;
   int ind=upper_bound(a,a+n,x)-a;
   ind--;
   if(ind>=0 && a[ind]==x) cout<<ind;
   else cout<<-1;
   cout<<"\n";
   
   x=2;
   ind=upper_bound(a,a+n,x)-a;//returns 1 normally
   ind--;
   if(ind>=0 && a[ind]==x) cout<<ind;
   else cout<<-1;
   cout<<"\n";

   x=0;
   ind=upper_bound(a,a+n,x)-a;//returns 0 normally
   ind--;
   if(ind>=0 && a[ind]==x) cout<<ind;
   else cout<<-1;
   cout<<"\n";

}
