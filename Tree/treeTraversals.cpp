#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    
    Node(int val){
        data =val;
        left=right=NULL;
    }
};
vector<vector<int>> bfs(struct Node *root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    
    queue<struct Node*>q;
    q.push(root);
    
    
    while(!q.empty()){
        vector<int>level;
        int size=q.size();
        
        for(int i=0;i<q.size();i++){
            struct Node *temp=q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    
    return ans;
}
void preOrder(struct Node *root){
    if(root==NULL) return;
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    struct Node *root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(17);
    root->right->left=new Node(21);
    root->left->right=new Node(3);
    preOrder(root);
    cout<<endl;
    vector<vector<int>>arr=bfs(root);
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
