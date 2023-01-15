//Given a binary tree, find if it is height balanced or not. 
//A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 
//
//A height balanced tree
//        1
 //    /     \
 //  10      39
//  /
//5



class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
        // func to calc height
    int height(Node * node){
        
        if(node == NULL) return 0;
        int left = height(node->left);
        int right = height(node->right);
        return max(left , right) +1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == NULL) return true;
    
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        // condition to check if node is balanced
        bool diff = abs(height(root->left) - height(root->right)) <=1;
        
        if(left && right && diff) return true;
        else return false;
    }
};
