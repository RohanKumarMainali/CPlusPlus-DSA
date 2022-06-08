#include<iostream>
#include<vector>
using namespace std;

  void print(vector<int> &nums1){
        for(int i=0;i<nums1.size();i++){
            cout<<" "<<nums1[i];
        }
    }
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start=0;
        
       int firstSize=nums1.size();
        int startingMergeIndex=firstSize-m;
        int i=0;
        int k=firstSize-m;
        
        
        for(;start<m;start++){
            nums1[startingMergeIndex]=nums2[start];
            startingMergeIndex++;
        }
        
        while(k<firstSize && i<k){
            cout<<"Value of k: "<<k<<endl;
            
            if(nums1[i]<=nums1[k]){
                i++;
            }                                                                                                                                                                                                                                                                                                                                                 
            else if(nums1[i]>nums1[k]){
                int temp=nums1[k];
                int count=k-i;

                for(int l=0;l<count;l++){
                    nums1[k-l]=nums1[k-l-1];
                    
                }
                nums1[i]=temp;
                k++;
                i++;
            }
           
            
        }
        cout<<"Sorted Successfully ";
        
        
    }

  
int main(){

    vector<int> nums1={1,2,3,0,0,0};
    
    vector<int> nums2={2,5,6};
    int m=3;
    int n=3;


        merge(nums1,m,nums2, n);
        print(nums1);

}