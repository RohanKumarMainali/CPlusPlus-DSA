
class Solution{
    public:
        int height (struct Node * node){
            
            if(node == NULL) return 0;
            int leftSubTreeHeight = height(node->left);
            int rightSubTreeHeight = height(node->right);
            return max(leftSubTreeHeight + rightSubTreeHeight) + 1;

        }
}
