//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(root == NULL) return ans;
   
   map<int, int> mp;
   queue<pair<Node *, int>> q;
   q.push({root, 0});
   
   while(!q.empty()){
       
       auto temp = q.front();
       Node * frontNode = temp.first;
       q.pop();
       int level = temp.second;
       if(mp.find(level) == mp.end()) mp[level] = frontNode->data;
       
       if(frontNode -> left) q.push({frontNode->left, level + 1});
       if(frontNode -> right) q.push({frontNode->right, level + 1});
       
   }
   
   for(auto i: mp){
       ans.push_back(i.second);
   }
   return ans;
}

// recursive approach
//
void solve(Node * root, vector<int> & ans,int level){
   if(root == NULL) return;
   
   // if we are in new level
   if(ans.size() == level) ans.push_back(root->data);

   solve(root->left, ans, level + 1);
   solve(root->right,ans,level+ 1);
}

vector<int> leftView(Node *root)
{
   // Your code here
    vector<int> ans;
       if(root == NULL) return ans;
       solve(root, ans,0);
       return ans;

}

