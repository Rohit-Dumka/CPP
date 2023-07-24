#include <iostream>
using namespace std;
int main() {
    int a[]={10,20,20,30,30,30,40};
    int n=sizeof(a)/sizeof(int);
    int temp[n];
    temp[0]=a[0];
    int j=1;
    
    for(int i=1;i<n;i++)
    {
        if(temp[j-1]!=a[i])
        {
            temp[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
        cout<<temp[i]<<" ";
}

//method 2--------------------------

#include <iostream>
using namespace std;
int main() {
    int a[]={10,20,20,30,30,30,40};
    int n=sizeof(a)/sizeof(int);
    int j=1;
    
    for(int i=1;i<n;i++)
    {
        if(a[j-1]!=a[i])
        {
            a[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
        cout<<a[i]<<" ";
}
