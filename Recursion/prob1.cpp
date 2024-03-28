//print 1 to n Recursion
//print n to 1 Recursion
//print n to 1 Backtracking
//print 1 to n Backtracking

//1
#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}

//2
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}

//3
#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return ;
    print(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}

//4
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    print(n);
}
