//reverse an array:
//2 variables change
//single variable change
//string palindrome check

#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>a){
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
}
void rev(vector<int>&a,int s,int e){
    if(s>=e) return;
    
    swap(a[s],a[e]);
    rev(a,s+1,e-1);
}
int main() {
    int n,x;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    print(a);
    rev(a,0,n-1);
    cout<<"after: reverse"<<endl;
    print(a);
    
}

//single var change

#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>a){
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
}
void rev(vector<int>&a,int i,int n){
    if(i>=n/2) return;
    
    swap(a[i],a[n-i-1]);
    rev(a,i+1,n);
}
int main() {
    int n,x;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    print(a);
    rev(a,0,n);
    cout<<"after: reverse"<<endl;
    print(a);
    
}

//string palindrome

#include<iostream>
using namespace std;
bool f(string s,int i){
    if(i>=s.size()/2) return true;
    
    if(s[i]!=s[s.size()-i-1]) return false;
    return f(s,i+1);
}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    cout<<f(s,0);
}
