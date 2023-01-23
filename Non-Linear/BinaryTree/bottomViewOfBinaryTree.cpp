
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int> ans;
        if(root == NULL) return ans;
        
        map<int, int > mp;
        queue<pair<Node * , int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            
            auto temp = q.front();
            Node * frontNode = temp.first;
            q.pop();
            
            int hd = temp.second;
            mp[hd] = frontNode->data;
            
            // for left and right children
            
            if(frontNode->left) q.push({frontNode->left, hd - 1});
            if(frontNode->right) q.push({frontNode->right, hd + 1});
            
        }
        
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

