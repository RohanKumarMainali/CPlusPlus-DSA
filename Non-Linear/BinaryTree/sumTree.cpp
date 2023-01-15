
// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    
        //first value contains bool and second contains the sum
    pair<bool, int> sumTreeFast(Node * node){

        // base case
        
        if(node == NULL) {
            
            pair <bool,int> p = make_pair(true,0);
            return p;
            
        }
        // for leaf node
        if(node->left == NULL && node->right == NULL){
            pair <bool,int> p = make_pair(true,node->data);
            return p;
        }
        
        pair<bool, int> left = sumTreeFast(node->left);
        pair<bool, int> right= sumTreeFast(node->right);
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool value = left.second + right.second == node->data;
        
        pair<bool,int> ans;
        if(leftAns && rightAns && value){
            ans.first = true;
            ans.second = 2 * node->data;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    
    
    bool isSumTree(Node* root)
    {
         // Your code here
         return sumTreeFast(root).first;
    }
};
