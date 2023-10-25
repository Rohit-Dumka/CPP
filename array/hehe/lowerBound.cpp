#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,5,6,9,9};
   int n=sizeof(a)/sizeof(int);
   //syntax : lower_bound(first iterator,last iterator , element) -a.begin;

   int ind=lower_bound(a,a+n,4)-a;
   //returns the index where 4 is present in array
   cout<<"index of 4: "<<ind;

   //since the element isn't present therefore it returns the index of element which  immidiatily points to the next greater element of 7 , i.e. 9
   ind=lower_bound(a,a+n,7)-a;
   cout<<"\nindex of 7: "<<ind;
   
   //since 10 isn't present ,therefore it should be returning the index of elment which imidiately points to the next greater element of 10.
   //as we know 10 isn't in array so :
   //last elemnent is 9 and 10 must be after 9 so it returns the index of last element +1
   ind=lower_bound(a,a+n,10)-a;
   cout<<"\nindex of 10: "<<ind;
}
//Time Complexity:  The number of comparisons performed is logarithmic.
//therefore tc of these operations is O(logN)
