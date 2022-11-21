#include<iostream>
using namespace std;
#include<vector>

    bool check(vector<int> & nums){

        int n=nums.size();
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
 
 int main(){
     vector<int> v={4,5,7,8,9};
     cout<<check(v);
 }