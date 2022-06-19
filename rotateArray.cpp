#include<iostream>
using namespace std;

// Solution 1 with Time complexity: O(N) and space Complexity: O(N)

/*
void rotateArr(int arr[], int d, int n){
    // code here
   
   // creating a temp array to store losing number
   if(d>n){
    d=d-n;
   }
    int array[d];
    int temp[n];
    for(int i=0;i<d;i++){
        array[i]=arr[i];
       
    }
  
    // shifting arr value
    for(int i=0;i<n-d;i++){
        temp[i]=arr[i+d];
    }

    int j=0;
   for(int i=n-d;i<n;i++){
        if(j<d){
        temp[i]=array[j];
        cout<<"j:"<<j;
        j++;
        }
       

   }
 

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    
}
*/

// Solution 2 with time complexity : O(N) and space complexity: O(1)
// optimized way

//----------------------------------------------------------------

void reverseArr(int arr[],int low,int high){
        
        while(low<=high){
            int temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            low++;
            high--;
        }
    
    
}

void rotateArr(int arr[], int d, int n){
    // code here
      // In case of d is greater than n;
      d=d%n;
      
      reverseArr(arr,0,d-1);
      reverseArr(arr,d,n-1);
      reverseArr(arr,0,n-1);
    
}

int main(){
    int arr[47]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
     rotateArr(arr,77,47);

}
