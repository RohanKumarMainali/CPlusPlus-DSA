#include<iostream>
using namespace std;
#include<vector>

// Brute force solution ----Time Limit Exceeded;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;
        int middle=0;
       
        
        //checking for the left
        
        while(middle<=end){
             int rightSum=0;
             int leftSum=0;
            for(int i=middle+1;i<=end;i++){
                rightSum+=nums[i];
                
                
                
            }
            for(int i=start;i<middle;i++){
                leftSum+=nums[i];
            }
                                          
            if(rightSum==leftSum){
                return middle;
            }
            else{
                middle++;
            }
            
        }
        return -1;
        
    }
    // efficient way
     int pivotIndex(vector<int>& nums) {
        
        int totalSum=accumulate(nums.begin(),nums.end(),0);;
        
       
        
        
        int currentSum=0;
       
        
        for(int i=0;i<nums.size();i++){
            
            int leftOver=totalSum-currentSum-nums[i];
                
            if(leftOver==currentSum){
              return i;
            }
            else{
                currentSum+=nums[i];
            }
        }
        return -1;
        
    }
};