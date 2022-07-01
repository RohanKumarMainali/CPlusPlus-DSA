#include<iostream>
using namespace std;


void merge(int arr[],int s, int e){

    int mid=s+(e-s)/2;

    int length1= mid-s+1;
    int length2= e-mid;

    // new two array
    int * array1 =  new int[length1];
    int * array2 =  new int[length2];

    int mainIndex=s;

    for(int i=0;i<length1;i++){
        array1[i]=arr[mainIndex++];
    }

    mainIndex= mid+1;

    for(int j=0;j<length2;j++){
        array2[j]=arr[mainIndex++];
    }

    // sorting and merging both array
    int i=0,j=0;
    mainIndex=s;
    while(i<length1 && j<length2){

        if(array1[i]<array2[j]){
            arr[mainIndex++]=array1[i++];
        }
        else{
            arr[mainIndex++]=array2[j++];
        }

    }

    // if any of the array is greater than another
    while(i<length1){
  
            arr[mainIndex++]=array1[i++];
     
    }

    while(j<length2){
    
            arr[mainIndex++]=array2[j++];
        
    }


}

void mergeSort(int arr[],int s,int e){


    // base case
    if(s>=e){
        return ;
    }
     int mid= s+(e-s)/2;

    // sort left array

    mergeSort(arr,s,mid);

    // sort right array
    mergeSort(arr,mid+1,e);

    // merge

    merge(arr,s,e);


}

int main(){

    int arr[5]={23,34,2,5,0};
    int size=5;
    mergeSort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}