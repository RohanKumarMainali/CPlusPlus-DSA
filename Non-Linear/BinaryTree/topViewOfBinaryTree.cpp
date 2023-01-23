class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        
        vector<int> ans;
        if(root == NULL) return ans;
        
        map<int,int> mp;
        queue<pair<Node *,int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto que = q.front();
            Node * temp = que.first;
            q.pop();
            int hd = que.second;
            
            // check if mapping of hd is present
            // either check using if(mp.find(hd) == mp.end());
            // or like below
            
            if(!mp[hd]) mp[hd] = (temp->data);
            
            if(temp->left) q.push({temp->left, hd - 1 });
            if(temp->right) q.push({temp->right, hd + 1});
        }
        
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }

};
