vector<int> iterativePreorder(struct Node *root){
    vector<int>preorder;
    if(root==NULL) return preorder;
    
    stack<struct Node*>st;
    st.push(root);
    
    while(!st.empty()){
        root=st.top();
        st.pop();
        preorder.push_back(root->data);
        
        if(root->right)st.push(root->right);
        if(root->left)st.push(root->left);
    }
    return preorder;
}
