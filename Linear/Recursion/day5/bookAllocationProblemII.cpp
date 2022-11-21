
#include <iostream>
#include<vector>
using namespace std;

bool isPossible(vector <int> arr, int mid, int m){
    
    int studentCount=1;
    int pageCount=0;
    
    for(int i=0;i<arr.size();i++){
        if(pageCount + arr[i] <= mid){
            pageCount+=arr[i];
        }
        else{
            studentCount++;
            pageCount=arr[i];
            if(arr[i] > mid || studentCount > m){
                return false;
            }
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
    if(isPossible( time,mid, m)){
       
        ans = mid;
        return binarySearch(time,  n, s, mid-1 , m);
    }
    else{
       return binarySearch(time,  n, mid+1, e , m);
    }
    
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0;
    int end=sum;
    
    int mid= start + (end- start)/2;
    return binarySearch(arr,n,start,end,m);
    
}

int main(){
    vector<int> arr {12 ,34, 67, 90};
    int size=4;
    int m=2;
    cout<<allocateBooks(arr,size,m);
}