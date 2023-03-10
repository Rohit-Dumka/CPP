#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a{1,2,3,4,5,6};//first set 
vector<int>b{3,4,5,8,9};//second set
vector<int>u;//union of both set a and set b

for(int i=0;i<a.size();i++){
    u.push_back(a[i]);
}
//as set is a collection of unique elements therefore no need to 
//search for duplicate elements in tbe same set

int k=u.size();

for(int i=0;i<b.size();i++){
    for(int j=0;j<k;j++){
        if(b[i]==u[j])
            b[i]=INT_MIN;
    }
    if(b[i]!=INT_MIN)
        u.push_back(b[i]);
}
    
cout<<"union is : "<<endl;
    
for(auto ans:u)
    cout<<ans<<" ";
}
