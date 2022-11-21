#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool isPossible(vector<int> &stalls,int k, int mid){
    
    int cowCount=1;
    int position=stalls[0];
    cout<<"mid: "<<mid<<endl;
    
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-position>=mid){
            cowCount++;
            position=stalls[i];
            if(cowCount==k){
                return true;
            }
        }
    }
    return false;
    
}


int aggressiveCows(vector<int> &stalls, int k)
{
 
    sort(stalls.begin(),stalls.end());
 
    int s=0;
    int e=stalls[stalls.size()-1];
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        
        // if it can be possible solution we will only look to its right side because we need maximum distance
        if(isPossible(stalls,k,mid)){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr {4 ,2 ,1 ,3 ,6};
    int k=2;
    int ans= aggressiveCows(arr,  2);
    cout<<ans;
    
}