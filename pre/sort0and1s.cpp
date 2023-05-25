#include <iostream>
using namespace std;
int main() {
  int arr[]={1,1,0,0,1,0,1,0};
  int n=sizeof(arr)/sizeof(int);
  int s=0;
  int e=n-1;
  while(s<e)
  {
      if(arr[s]>arr[e])
      {
          swap(arr[s],arr[e]);
          s++;
          e--;
      }
      if(arr[s]<arr[e])
      {
          s++;
      }
      else
      {
          e--;
      }
  }
  
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
}
