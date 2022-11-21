#include <iostream>
#include<vector>
using namespace std;



bool checkPossible(int n, int m, vector<int> time,int mid){
    long long pageSum=0;
    int studentCount=1;
    
    for(int i=0;i<n;i++){
        if(pageSum+time[i]<=mid){
            pageSum+=time[i];
        }
        else{
            studentCount++;
            if(time[i]>mid || studentCount>m){
                return false;
            }
            pageSum=time[i];
        }
    }
    return true;
    
}
int ans=-1;
int binarySearch(vector<int> time, int n,int s,int e, int m){
    
    int mid= s+(e-s)/2;
    
    if(s>e){
        return ans;
    }
    if(checkPossible( n,  m, time, mid)){
       
        ans = mid;
        return binarySearch(time,  n, s, mid-1 , m);
    }
    else{
       return binarySearch(time,  n, mid+1, e , m);
    }
    
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{    
    int start=0;
    long long totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=time[i];
    }
    long long end=totalSum;
    
    long long mid=start+(end-start)/2;
    return binarySearch(time,n,start,end, m);
 
}

int main(){

    vector<int> time {2 ,2 ,3 ,3 ,4 ,4 ,1 };
    int m=4;
    cout<<ayushGivesNinjatest(7,m,time);
}