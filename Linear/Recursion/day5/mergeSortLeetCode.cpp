#include <iostream>
#include<vector>
using namespace std;


    
    void merge(vector<int> & arr , int s, int e){
        
        int mid=s+(e-s)/2;
        
        int length1= mid-s+1;
        int length2=e-mid;
            
        
        int * array1 =  new int[length1];
        int * array2 =  new int[length2];
        
        // copying the element in array 1
        
        int mainIndex=s;
        
        for(int i=0;i<length1;i++){
            array1[i] = arr[mainIndex++];    
        }
        
         // copying the element in array 2
         for(int i=0;i<length2;i++){
            array2[i] = arr[mainIndex++];    
        }
        
        // sorting and merging
        
        int i=0;
        int j=0;
        mainIndex=s;
        
        while(i<length1 && j<length2){
            
            if(array1[i] < array2[j]){
                arr[mainIndex++] = array1[i++];
            }
            
             else{
                 arr[mainIndex++] = array2[j++];
            }
            
        }
        
        while(i<length1){
            arr[mainIndex++] = array1[i++];
        }
          while(j<length2){
            arr[mainIndex++] = array2[j++];
        }
        
     

        
    }
    
    void mergeSort(vector<int> & arr , int s, int e){
        
        
        if(s>=e){
            return;
        }
        
        int mid=s+(e-s)/2;
        
        // for left partition
         mergeSort(arr , s, mid);
        
        // for right partition
         
        mergeSort(arr, mid+1, e);
        
        // merging the array
        
        merge(arr,s,e);
        
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        int s=0;
        int e=nums.size()-1;
        
        mergeSort(nums, s, e);
        
        return nums;
    }

    int main(){

        vector<int> nums {5,50,10,20,1};
        int size=5;
        sortArray(nums);

        for(int i=0;i<size;i++){
            cout<<nums[i]<< " ";

        }
    }
