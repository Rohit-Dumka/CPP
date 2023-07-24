//left rotate an array by d

#include <iostream>
using namespace std;
void reverse(int arr[],int l,int r)
{
    while(l<r)
    {
        swap(arr[l],arr[r]);
        l++,r--;
    }
}
int main() {
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int d=2;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
    for(int x:a)
        cout<<x<<" ";
}
