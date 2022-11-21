 
 #include <iostream>
 using namespace std;
 #include <vector>

 class Solution{
    
     public:
    
    bool isPossible(int x, int y,  vector<vector<bool>>&visited,int n, vector<vector<int>>&m){
        if((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y] == false) && (m[x][y] ==1 )){
            return true;
            
        }
        else{
            return false;
        }
 
    }
    
    void solve(vector<vector<int>> &m, int n, int x, int y,   vector<vector<bool>>&visited, vector<string>&ans, string path){
        
        
        if(isPossible(x,y,visited,n,m)==false){
            return ;
        }
      
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        
        visited[x][y] = true;
    
        path+='D';
        solve( m ,  n, x+1, y, visited, ans, path);
        path.pop_back();
    
   
        path+='R';
        solve( m ,  n, x , y+1, visited, ans, path);
        path.pop_back();
        
        
        path+='U';
        solve( m ,  n, x-1, y, visited, ans, path);
        path.pop_back();

  
        
        path+='L';
        solve( m ,  n,  x, y-1, visited, ans, path);
        path.pop_back();
        
    
        visited[x][y] = false;
        
        
    }
    

    vector<string> findPath(vector<vector<int>>&m, int n) {
        // Your code goes here
        
        vector<string> ans;

        int xpos = 0;
        int ypos = 0;
        
       vector<vector<bool>> visited(n,vector<bool>(n,false));
        
        string path ="";
 
        solve( m ,  n, xpos, ypos, visited, ans, path);
        
        return ans;
        
    }
};