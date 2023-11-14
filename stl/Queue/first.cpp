#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int>q;
    
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(9);
    cout<<q.front()<<" ";
    q.pop();
    cout<<q.front()<<" ";
    
    cout<<"\nsize of queue : "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
  
    // q.swap(q2);
}
