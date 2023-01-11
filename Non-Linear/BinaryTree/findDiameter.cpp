
// time complexity = O(N^2)
//
class Solution{
    public: 
        int height (Node * node){
            
            if(node==NULL) return 0;
            int left = height(node->left);
            int right = height(node ->right);
            int ans = max(left , right ) + 1;
            return ans;
        }

        int diameter(Node * root){
           
            if(root == NULL) return 0;

            int leftDiameter = diameter(root->left);
            int rightDiameter = diameter(root->right);
            int totalHeight = height(root->left) + height (root->right) +1 ;
            int ans = max(totalHeight , max(leftDiameter, rightDiameter));
            return ans;
        }
}

// to optimize this solution and get the time complexity to O(N)
// we have to calculate the diameter and height at the same time
//

//
class OptimizedSolution{
    public:
    pair<int,int> diameterAndHeight (Node * node){
        
        if(node == NULL) return make_pair(0,0);
        pair<int,int> left = diameterAndHeight(node->left);
        pair<int,int> right = diameterAndHeight(node->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;

        //formula to calculate diameter
        ans.first= max(op3 , max(op1,op2));
        // formula to calculate height
        ans.second = max(left.second,right.second) + 1;
        return ans;

    }
    int diameter(Node * root){

        return diameterAndHeight(root).first;
       
        }}


