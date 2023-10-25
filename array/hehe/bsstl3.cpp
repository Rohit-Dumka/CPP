//find the largest number smaller than X in a sorted array. If it doesn't exits, print -1
#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,4,4,4,9,10,11};
   int n=sizeof(a)/sizeof(int);
   
   int x=4;
   int ind=lower_bound(a,a+n,x)-a;
   ind--;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";
   
   x=2;
   ind=lower_bound(a,a+n,x)-a;
   ind--;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";

   x=1;
   ind=lower_bound(a,a+n,x)-a;
   ind--;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";

   x=11;
   ind=lower_bound(a,a+n,x)-a;
   ind--;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";
}


//find the smallest number greater than X in a sorted array. If it doesn't exits, print -1
#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,4,4,4,9,10,11};
   int n=sizeof(a)/sizeof(int);
   
   int x=4;
   int ind=upper_bound(a,a+n,x)-a;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";
   
   x=2;
   ind=upper_bound(a,a+n,x)-a;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";

   x=1;
   ind=upper_bound(a,a+n,x)-a;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";

   x=11;
   ind=upper_bound(a,a+n,x)-a;
   if(ind>=0) cout<<ind;
   else cout<<-1;
   cout<<"\n";
}
