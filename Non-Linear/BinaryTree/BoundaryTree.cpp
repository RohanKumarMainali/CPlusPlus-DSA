
// Binary tree implementation
class Solution {
public:

    void left (Node * node, vector<int> & ans){
        
        
        if(node == NULL)return;
        
        if(!node->left && !node->right) return;
        ans.push_back(node->data);
        if(node->left)left(node->left,ans);
        else left(node->right,ans);
    }
    
     void leaf (Node * node, vector<int> & ans){
        
        if(node == NULL)return;
        if(node->left ==NULL && node->right==NULL)ans.push_back(node->data);
        leaf(node->left,ans);
        leaf(node->right,ans);
       
    }
    
    void right(Node * node, vector<int > & ans){
    
        
        if(node == NULL)return;
        if(!node->left && !node->right) return;
        
        if(node->right)right(node->right,ans);
        else right(node->left,ans);
        ans.push_back(node->data);
        
    }

    vector <int> boundary(Node *root)
    {
        //Your code here
        // for left boundary nodes
        vector<int> ans;
        if(root==NULL)return ans;
        ans.push_back(root->data);
        
        // left node
        
        left(root->left,ans);
        
        // leaf node of left subtree
        
        leaf(root->left,ans);
        
        // leaf node of right subtree
        
        leaf(root->right,ans);
        right(root->right,ans);
        return ans;
        
    }
};
