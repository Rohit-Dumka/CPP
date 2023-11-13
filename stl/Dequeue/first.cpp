//faster than vectors interms of inseertion & deletion
// no guarantee of contiguous memory allocation 

#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int>d{1,2,3,4,5};
    for(auto it=d.begin();it!=d.end();++it){
        cout<<*it<<" ";
    }
}

//------------------------------------------

#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int>d;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        d.push_back(key);
      //d.push_front(key)
    }
    for(auto it=d.begin();it!=d.end();++it){
        cout<<*it<<" ";
    }
}

//-----------------------------------------------

#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int>d;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        d.push_back(key);
    }
    for(auto it=d.begin();it!=d.end();++it){
        cout<<*it<<" ";
    }
    cout<<"\n"<<d.front()<<d.back()<<endl;
    d.pop_front();
    d.pop_back();
    cout<<"\nsize : "<<d.size();
    d.clear();
    cout<<"\nsize : "<<d.size();
    
}

//-----------------------------------------

#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int>d;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        d.push_back(key);
    }
    for(auto it=d.begin();it!=d.end();++it){
        cout<<*it<<" ";
    }
    cout<<"\n"<<d.front()<<d.back()<<endl;
    d.pop_front();
    d.pop_back();
    cout<<"\nsize : "<<d.size();
    cout<<"\n first ele: "<<d.at(1);
    d.clear();
    cout<<"\nsize : "<<d.size();
    if(d.empty()) cout<<"object is empty"<<endl;
    // dq2.swap(dq);
}
