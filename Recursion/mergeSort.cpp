#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,int low,int mid,int high){
    int left=low,right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(a[left]<=a[right]) temp.push_back(a[left++]);
        else temp.push_back(a[right++]);
    }
    while(left<=mid)temp.push_back(a[left++]);
    while(right<=high)temp.push_back(a[right++]);
    
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}
void mergeSort(vector<int>&a,int low,int high){
    if(low>=high) return ;
    int mid=low+(high-low)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}
int main(){
    int n,x;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    mergeSort(a,0,n-1);
    
    for(int i:a){
        cout<<i<<" ";
    }
}
