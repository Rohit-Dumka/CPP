//Merge Sort

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

//Quick Sort

#include <iostream>
#include <vector>
using namespace std;
int q(vector<int>&a,int l,int h){
    int p=l;
    int i=l,j=h;
    while(i<j){
        while(a[i]<=a[p] && i<=h)i++;
        while(a[j]>a[p] && j>=l) j--;
        if(i<j) swap(a[i],a[j]);
    }
    swap(a[j],a[p]);
    
    return j;
}
void qs(vector<int>&a,int l,int h){
    if(l<h){
        int p=q(a,l,h);
        qs(a,l,p-1);
        qs(a,p+1,h);
    }
}
int main(){
    vector<int>a{8,4,1,3,5,7,2};
    qs(a,0,6);
    
    for(int i:a) cout<<i<<" ";
}
