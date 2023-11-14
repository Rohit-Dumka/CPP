#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int>pq; //max heap
    pq.push(10);
    pq.push(20);
    pq.push(50);
    pq.push(60);
    pq.push(30);
    pq.push(40);
   
    cout<<"top : "<<pq.top()<<endl;
    cout<<"size : "<<pq.size()<<endl;
    pq.pop();
    cout<<"new top : "<<pq.top();
    
    cout<<endl;
    
    priority_queue<int, vector<int>, greater<int>>mh; //min heap
    mh.push(50);
    mh.push(10);
    mh.push(20);
    mh.push(60);
    mh.push(30);

    cout<<"top : "<<mh.top()<<endl;
    cout<<"size : "<<mh.size()<<endl;
    mh.pop();
    cout<<"new top : "<<mh.top();
    
    if(pq.empty())
        cout<<"\nempty\n";
    else
        cout<<"\nnot empty\n";
    
    
    priority_queue<int>pq2;
    pq2.push(11);
    pq2.push(15);
    pq2.push(35);
    pq2.push(7);
    
    cout<<"\nswapping----------------\n\n";
    cout<<pq.top()<<"\n"<<pq2.top()<<"\n";
    pq.swap(pq2);
    cout<<pq.top()<<"\n"<<pq2.top();
}
