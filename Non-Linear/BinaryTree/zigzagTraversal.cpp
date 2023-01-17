//Time complexity - O(N)
//Space complexity - O(N)

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        queue<Node * > q;
        vector<int>ans;
        q.push(root);
        bool leftToRight = true;
        
        while(!q.empty()){
            
            int size = q.size();
            vector<int> tempAns(size);
            // level order
            for(int i=0;i<size;i++){
                Node * temp = q.front();
                q.pop();
                
                int index = leftToRight ? i : size - 1 - i;
                tempAns[index] = temp->data;
                
                // for left and right
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            // after traversing one level lets reverse the order
            leftToRight = !leftToRight;
            
            // store tempAns in ans;
            for(auto i: tempAns) ans.push_back(i);
        }
        return ans;
    
        
    	// Code here
    }
};
