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

//-------------------------------------

#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main() {
    stack <int> s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(9);
    printStack(s);
}

//----------------------------------------

#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main() {
    stack <int> s,s2;
    // stack<stack<int>>s;
    // stack<vector<int>>s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(9);
    printStack(s);
    s2.push(2);
    s2.push(6);
    s2.push(12);
    s2.push(8);
    printStack(s2);
    cout<<"after swap: "<<endl;
    s.swap(s2);
    printStack(s);
    printStack(s2);
}
