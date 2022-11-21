#include<iostream>
#include<vector>
 using namespace std;

// Naive approach / Brute-force
    /* 
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        
        int n=r*c;
        int index=0;
        vector<int> temp(r*c,0);
        int first=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp[first]=matrix[i][j];
                first++;
            }
        }
        sort(temp.begin(),temp.end());
 
     

        return temp[n/2];
    }


    */

   // efficient-appoarch using binary search

    int median(vector<vector<int>> & matrix, int r, int c){
        // code here    
        
        int start=0;
        int end=2000;
        int mid=start+(end-start)/2;
        int n=r*c;
        int target=(n/2);
        
        
        while(start<=end){
            
           int ans=0;
            
            for(int i=0;i<r;i++){
                 int high=c-1;
                 int low=0;
                 int m=low+(high-low)/2;
        
                while(low<=high){
                     if(matrix[i][m]<=mid){
                        low=m+1;
                    }
                    else{
                        high=m-1;
                        
                    }
                    

                     m=low+(high-low)/2;
                  
                    
                    cout<<"Target: "<<target;
                   
                }
                ans+=low;
                cout<<"Ans: "<<ans<<endl;
             
                
            }
            if(ans>target) end=mid-1;
            else start=mid+1;
            mid=start+(end-start)/2;  
        
    }
           return mid;
    
    }

    int main(){

        vector<vector<int>> v={{1, 3, 5},{ 2, 6, 9},{ 3, 6 ,9}};
        cout<<median(v,3,3);

    }

