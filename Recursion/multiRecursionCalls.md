//fibonacci number

```
#include<iostream>
using namespace std;
int f(int n){
    if(n<=1) return n;
    
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}
```


![image](https://github.com/Rohit-Dumka/CPP/assets/96404582/bd27e21a-475c-431c-aba6-ef6d6457b0e5)
