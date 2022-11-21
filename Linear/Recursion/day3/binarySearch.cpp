#include<iostream>
using namespace std;

bool binarySearch(int arr[], int key,int start,int end){

    int mid=start+(end - start)/2;

    if(arr[mid]==key){
        cout<<"index of key is: "<<mid<<endl;
        return true;
    }
    if(start>end){
        return false;
    }
   
    if(arr[mid]>key){
      return  binarySearch(arr,key,start,mid-1);
    }
     else{
        return  binarySearch(arr,key,mid+1,end);
     }

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int key=1;
    int start=0;
    int end=5;
    cout<<binarySearch(arr,key,start,end);

}