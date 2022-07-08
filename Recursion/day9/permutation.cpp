#include <iostream>
using namespace std;
#include<vector>

class Solution {
private:
    
    void solve(int index, vector<int> nums,vector<vector<int>> & ans){
        
        if(index>= nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=index;j<nums.size();j++){
            
            swap(nums[index],nums[j]);
            solve(index + 1, nums, ans);
            
            // re swapping after recursive call to make original array
            // back tracking
            swap(nums[index],nums[j]);
        }
        
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        int index = 0;
        vector<vector<int>> ans;
        
        solve(index, nums, ans);
        return ans;
    }
};