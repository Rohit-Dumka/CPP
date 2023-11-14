#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(9);
    cout<<s.top()<<endl;
    cout<<"\nsize of stack : "<<s.size()<<"\n";
    cout<<"elements : \n";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
