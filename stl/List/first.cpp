#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int>l{2,2,11,5,9};
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
}

//---------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int>l;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int key;
        cin>>key;
        l.push_back(key);
    }
    
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
}

//---------------------------------------

#include <bits/stdc++.h>
using namespace std;
bool even(int x){
    return x%2==0;
}
int main() {
    list<int>l;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int key;
        cin>>key;
        l.push_back(key);
    }
    l.pop_back();
    l.pop_front();
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // l.remove(2); //remove all 2's
    // for(auto it=l.begin();it!=l.end();it++){
    //     cout<<*it<<" ";
    // }
    //can removes on condition as well
    
    l.remove_if(even);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    
    cout<<endl;
    l.reverse();
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<"size :" <<endl;
    l.clear(); //clears the list: removes all elements 
    cout<<l.size()<<endl;
}

//--------------------------------------------

#include <bits/stdc++.h>
using namespace std;
bool even(int x){
    return x%2==0;
}
int main() {
    list<int>l1;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int key;
        cin>>key;
        l1.push_back(key);
    }
    list<int>l2;
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);
    l1.swap(l2);
    cout<<"list 1: \n";
    for(auto it=l1.begin();it!=l1.end();++it){
        cout<<*it<<" ";
    }
    cout<<"\n list 2: \n";
    for(auto it=l2.begin();it!=l2.end();++it){
        cout<<*it<<" ";
    }
}

//---------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int>l1;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int key;
        cin>>key;
        l1.push_back(key);
    }
    list<int>l2;
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);
    
    l1.merge(l2);
    cout<<"\nl1: "<<l1.size()<<" l2: "<<l2.size()<<"\n";
    cout<<"\n after merge : \n";
    for(auto it=l1.begin();it!=l1.end();++it){
        cout<<*it<<" ";
    }
    for(auto it=l2.begin();it!=l2.end();++it){
        cout<<*it<<" ";
    }
}

//-----------------------------------------

#include <bits/stdc++.h>
using namespace std;
bool comparator(int a,int b){
    return a<b; //if true store element of l1,else l2
}
int main() {
    list<int>l1{1,3,5,7,9};
    list<int>l2{2,4,6,8,10};
    l1.merge(l2,comparator);
    
    for(auto it=l1.begin();it!=l1.end();++it){
        cout<<*it<<" ";
    }
}

//---------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int>l1{1,3,5,7,9};
    list<int>l2{2,4,6,8,10};
    l1=l2;
    
    for(auto it=l1.begin();it!=l1.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=l2.begin();it!=l2.end();++it){
        cout<<*it<<" ";
    }
}
