//program to print leaders in array:
//what are leaders ? leaders are that elements when nothing is bigger than it in the right of that element.
//e.g. : {30,20,10} all are leaders
//{17,3,5,9,11} 17,11 are leaders

#include <iostream>
using namespace std;
int main() {
    int a[]={7,10,4,3,6,5,2};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<=a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<a[i]<<" ";
    }
}


//method 2-----------------------

#include <iostream>
using namespace std;
int main() {
    int a[]={7,10,4,3,6,5,2};
    int n=sizeof(a)/sizeof(int);
    int leader=a[n-1];
    cout<<leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(leader<a[i])
        {
            leader=a[i];
            cout<<leader<<" ";
        }
    }
}
