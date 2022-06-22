#include<iostream>
#include<unordered_map>
using namespace std;


int findMode(int arr[],int n){

    unordered_map<int ,int> map;
    for(int i=0;i<n;i++){
        // counting frequency and mapping it with the element
        map[arr[i]]++;
    }
    int max=INT32_MIN;
    int ans=0;
    for(auto it: map){
        if(it.second>max){
            max=it.second;
            ans=it.first;
        }
        
    }
    return ans;
   

}

int main(){


    int arr[9]={2,1,3,3,3,4,4,4,4};
    int n=9;
    cout<<findMode(arr,n);

}