#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>


bool isPossible(vector<int> &arr,int k, int mid){
    cout<<" I am being called "<< mid<<endl;
    
    int cowCount=1;
    int position=arr[0];
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]-position>=mid){
            cowCount++;
            position=arr[i];
            cout<<cowCount<<"coe"<<endl;
            if(cowCount==k){
                return true;
            }
        }
    }
    return false;
    
}
int ans=0;
int binarySearch(vector<int> arr, int k , int s,int e){
    
    int mid=s+(e-s)/2;
 
    if(s>e){
        return ans;
    }
    
    if(isPossible(arr,k,mid)){
        ans=mid;
        cout<<" I am true"<<ans<<endl;
       return  binarySearch(arr,k,mid+1,e);
    }
    else{
       return binarySearch(arr,k,s,mid-1);
    }


   
   }


int aggressiveCows(vector<int> &stalls, int k)
{
 
    sort(stalls.begin(),stalls.end());
    int s=0;
    int e=stalls[stalls.size()-1];
    int ans= binarySearch(stalls, k , s, e);
    return ans;
}

int main(){
    vector<int> arr {4 ,2 ,1 ,3 ,6};
    int k=2;
    int ans= aggressiveCows(arr,  2);
    cout<<ans;
    
}