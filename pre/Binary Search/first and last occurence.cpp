#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v{2,4,10,10,10,18,20};
    int first=-1;
    int k=10;
    
    int s=0,e=v.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==k)
        {
            first=mid;
            e=mid-1;
        }
        else if(v[mid]<k)
            s=mid+1;
        else
            e=mid-1;
    }
    cout<<"first occurance is : "<<first<<"\n";
    
    int last=-1;
    s=0,e=v.size()-1;
    
   while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==k)
        {
            last=mid;
            s=mid+1;
        }
        else if(v[mid]<k)
            s=mid+1;
        else
            e=mid-1;
    }
    cout<<"last occurence is : "<<last<<"\n";
}
