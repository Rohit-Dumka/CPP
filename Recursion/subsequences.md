- Subsequence: A contiguous/non-contiguous sequences, which follows the order.
- EX: arr - [4 3 9]
- subsequences: {} , 4 , 3 , 9 , 4 3 , 4 9 , 3 9 , 4 3 9

```
#include<iostream>
#include<vector>
using namespace std;
void f(int i,vector<int>a,vector<int>&ans){
    if(i>=a.size()){
        for(int i:ans) cout<<i<<" ";
        if(ans.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    
    //take 
    ans.push_back(a[i]);
    f(i+1,a,ans);
    ans.pop_back();
    // not take
    f(i+1,a,ans);
}
void print(vector<int>a){
    for(int i:a) cout<<i<<" ";
    cout<<endl;
}
int main(){
    int n,x;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<"array: ";
    print(a);
    cout<<"subsequences: "<<endl;
    vector<int>ans;
    f(0,a,ans);
}
```
![image](https://github.com/Rohit-Dumka/CPP/assets/96404582/dbfbd461-4fb1-440a-a9a5-bb96ce6a375c)

![image](https://github.com/Rohit-Dumka/CPP/assets/96404582/25131185-eb1b-4337-b9d5-14f1f319c22a)
