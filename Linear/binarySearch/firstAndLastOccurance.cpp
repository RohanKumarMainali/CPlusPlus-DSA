#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int start, int end, int target, int &ans){

        int mid= start + (end - start )/2;

        while(start <= end){

            if(arr[mid] == target){
                ans = mid;
                cout<<"entered";
                start =mid+1;
                
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start = mid+1;
            }
            mid= start + (end - start )/2;
        }
        return ans;
        
}


int main(){

    int arr[15] = {5,7,7,7,7,8,8,8,8,8,8,8,8,9,10};
    int size=15;
    int start=0;
    int end= size-1;
    int ans=0;

    cout<<binarySearch(arr,size,start,end,8,ans);
    

}