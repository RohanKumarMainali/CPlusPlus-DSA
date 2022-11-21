#include<iostream>
using namespace std;
#include<vector>


    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ans = 0;
        long long firstSum = 0;
        long long secondSum =0;
        int size = nums.size();
        int i = 0;
        while(i<size){
            if(nums[i]==0) firstSum++;
            i++;
        }
        
        int count =0;
        int j=0;
        while(j<size){
            if(nums[j]==0){
                count++;
                
            }
            else{
                if(count>1){
                  
                    int k = count;
                    int index =0;
                    while(k>0){
                        secondSum = k - 1;
                        ans+=secondSum;
                        k--;                    
                        } 
                    }
                
                count = 0;
            }

            if(j==size-1 && count>1){
                cout<<count<<"yes"<<endl;
                int k = count;
                int index =0;
                while(k>0){
                    secondSum = k - 1;
                    ans+=secondSum;
                    k--;                    
                }
                
            }
            cout<<j;
            j++;
        }
 
 
        return ans + firstSum;
    }

int main(){
    vector<int> nums = {0,0,0,2,0,0};
    long long ans = zeroFilledSubarray(nums);
    cout<<ans;
}