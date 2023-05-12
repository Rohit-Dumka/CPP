#include<stdio.h>
int main()
{
    int a[100]={5,3,9,11,2,13};
    int n=6;
    int i=0,j,temp;
    j=n-1;
    
    // for(i=0;i<n/2;i++)
    // {
    //     temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    //     j--;
    // }
    
    // while(i<j)
    // {
    //     temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    //     i++,j--;
    // }
    
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

