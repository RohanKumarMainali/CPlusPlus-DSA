
// question link: https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

class Solution

{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        // crete custom datastructor using map that stores
        // Horizontal distance  ---> levelOfNode -----> vector<int> (that stores node->data)

        map<int, map<int, vector<int> > > mpp;
        
        queue <pair<Node * , pair<int, int > > > q;
        vector<int> ans;
        if(root == NULL) return ans;
        
        q.push({root, {0,0}});
        
        while(!q.empty()){
            
           pair<Node * , pair<int, int > >  q1 = q.front();
            Node * temp = q1.first;
            q.pop();
            int hd = q1.second.first;
            int level = q1.second.second;
            
            mpp[hd][level].push_back(temp->data);
            if(temp->left) q.push({temp->left, {hd - 1, level + 1}} );
            if(temp->right) q.push({temp->right, {hd + 1, level + 1}} );
            
        }
        
        for(auto i: mpp){
            for(auto j: i.second){
                for(auto k: j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};

