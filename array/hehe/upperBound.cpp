#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,4,5,6,9,9};
   int n=sizeof(a)/sizeof(int);
   //returns at iterator which points to the element which is immidiate greater than X.
   int ind=upper_bound(a,a+n,4)-a;
   //returns the index where element immediate greater then 4 is present in array
   cout<<"index of 4: "<<ind;

   //since the element isn't present therefore it returns the index of element which  immidiatily points to the next greater element of 7 , i.e. 9
   ind=upper_bound(a,a+n,7)-a;
   cout<<"\nindex of 7: "<<ind;
   
   //since 10 isn't present ,therefore it should be returning the index of elment which imidiately points to the next greater element of 10.
   //as we know 10 isn't in array so :
   //last elemnent is 9 and 10 must be after 9 so it returns the index of last element +1
   ind=upper_bound(a,a+n,10)-a;
   cout<<"\nindex of 10: "<<ind;
}
//Time Complexity:  again same O(logN)
