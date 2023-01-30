//question: Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.
//Note: It is guaranteed that the node exists in the tree.


//link: https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1


void solve(Node * root, int & ans, bool & found,int k, int node, int & count){
    
    if(root == NULL ) return;
    
    // when the node is found
    if(root->data == node) {
        found = true;
        return ;
    }
    
    solve(root->left,ans, found, k,node, count);
    // if node found in left side backtrack from left side
    if(found){
        count ++;
        if(count == k) ans = root->data;
        return;
    }
    
    solve(root->right,ans, found, k , node, count);
    // if node found on right side backtrack from right side
    if(found){
        count ++;
        if(count == k) ans = root->data;
        return;
    }
    
}

int kthAncestor(Node *root, int k, int node)
{

    bool found = false;
    int ans = -1;
    int count = 0;
    solve(root , ans, found, k , node, count);
    return ans;

    
}
