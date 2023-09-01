#include <bits/stdc++.h>
using namespace std;
void print(int i,vector<int>&a,int arr[],int n){
    if(i==n){
        for(int x: a)
            cout<<x<<" ";
        if(a.size()==0)
            cout<<"{}";
        cout<<endl;
            return;
    }
    //take or pick the particular index into the subsequence
    a.push_back(arr[i]);
    print(i+1,a,arr,n);
    a.pop_back();
    //not pick, or not take condition, this element is not added to your subsequence
    print(i+1,a,arr,n);
}
int main() {
    int arr[]={3,1,2};
    int n=3;
    vector<int>a;
    print(0,a,arr,n);
}

//-------------------------------rev order-----------------------------

#include <bits/stdc++.h>
using namespace std;
void print(int i,vector<int>&a,int arr[],int n){
    if(i==n){
        for(int x: a)
            cout<<x<<" ";
        if(a.size()==0)
            cout<<"{}";
        cout<<endl;
            return;
    }
    print(i+1,a,arr,n);
    
    a.push_back(arr[i]);
    print(i+1,a,arr,n);
    a.pop_back();

}
int main() {
    int arr[]={3,1,2};
    int n=3;
    vector<int>a;
    print(0,a,arr,n);
}
