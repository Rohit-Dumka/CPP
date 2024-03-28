- print sum 1 to n : functional(where function returns answer)

- print sum 1 to n : parametrised 

![image](https://github.com/Rohit-Dumka/CPP/assets/96404582/d0708a1c-0046-450b-87a0-a8f0786ec37d)
//1
```
#include<iostream>
#include<iostream>
using namespace std;
int f(int n){
    if(n<=1)return n;
    
    return n+f(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=f(n);
    cout<<ans;
}
```


![image](https://github.com/Rohit-Dumka/CPP/assets/96404582/69f4888b-df0c-4d75-adc9-983a346528cc)

//2

```
#include<iostream>
using namespace std;
void print(int n,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    print(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    print(n,0);
}
```
