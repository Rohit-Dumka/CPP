#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,4,4,9,11,15,19};
   int n=sizeof(a)/sizeof(int);
   bool res1=binary_search(a,a+n,11);
   bool res2=binary_search(a,a+n,3);
   cout<<"11: "<<res1<<endl;
   cout<<"3: "<<res2<<endl;
   
   //lbound : returns the iterator that points to the element
   //to get the index we have to subs the first iterator from it
   //if not found return the index of the element which is immidiate greater of that element
   //if value not found in array return the upperbound of that array that is sizeof array or index of last element + 1
   
   int ind=lower_bound(a,a+n,4)-a;
   int ind2=lower_bound(a,a+n,10)-a;
   int ind3=lower_bound(a,a+n,20)-a;
   cout<<"lower bound of 4 is : "<<ind<<endl;
   cout<<"lower bound of 10 is : "<<ind2<<endl;
   cout<<"lower bound of 20 is : "<<ind3<<endl;
   //for vecs-------------------
   //int ind=lower_bound(a.begin(),a.end(),x)-a.begin();
   
   //upper bound : return the iterator that points to the element which is just greater to the searched element
   int ind4=upper_bound(a,a+n,4)-a;
   int ind5=upper_bound(a,a+n,10)-a;
   int ind6=upper_bound(a,a+n,20)-a;
   cout<<"upper bound of 4 is : "<<ind4<<endl;
   cout<<"upper bound of 10 is : "<<ind5<<endl;
   cout<<"upper bound of 20 is : "<<ind6<<endl;
   
   //both lbound and ubound works in O(logn)
}
