#include<iostream>
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int right=n-1;
   int left=0;
   while(left<right){
       if(arr[left]==0){
           left++;
       }
       if(arr[right]==0){
           swap(arr[left],arr[right]);
        
       
       }
       if(arr[right]!=0){
           right--;
       }
   }

   int last=n-1;
   while(right<last){
       if(arr[right]==1){
           right++;
       }
       if(arr[last]==1){
           swap(arr[right],arr[last]);


       }
       if(arr[last]==2){
           last--;
       }
   }    
}

int main(){
    int arr[10]={0 ,0, 0, 1, 1, 0, 0 ,1, 1, 0};
    sort012(arr,10);
    for(int i=0;i<9;i++){
        cout<<arr[i];
    }

}