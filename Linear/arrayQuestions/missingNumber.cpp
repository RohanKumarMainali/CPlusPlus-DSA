#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

 int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(),array.end());
        // Your code goes here
        int ans=0;
        vector<int> temp(n);
        for(int i=1;i<=n;i++){
            if(array[i-1]!=i){
                ans=i;
                return ans;
            }
        }
        
    }

int main(){

    vector<int> array={1};
    int n=2;
    cout<<MissingNumber(array,n);

    

}