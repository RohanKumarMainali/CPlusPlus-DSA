



class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    
    pair<int,int> solve (Node * root){
        
        if(root== NULL) return {0,0};
        
        auto leftAns = solve(root->left);
        auto rightAns = solve (root->right);
        
        pair<int,int> temp;
        temp.first = root->data + leftAns.second + rightAns.second;
        temp.second = max(leftAns.first, leftAns.second) + max(rightAns.first, rightAns.second);
        return temp;
        
        
    }
    
    int getMaxSum(Node *root) 
    {
        // Add your code here
        if(root == NULL) return 0;
        
        auto ans = solve(root);
        return max(ans.first, ans.second);
    }
};
