

#include<iostream>
using namespace std;


void merge(long long arr[],long long s, long long e,long long mid , long long & count){
    
    long long temp[e];
    long long i=s;
    long long k=s;
    long long j=mid+1;
   
  
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            count += mid - i + 1 ;
            
        }
    }

    while(i<=mid){
        temp[k++] = arr[i++];
    }

    while(j<=e){
        temp[k++] =  arr[j++];
    }

    // copying temp to original
   
    for(long long it=s;it<=e;it++){
        arr[it] = temp[it];
    }
}

void mergeSort(long long arr[],long long s,long long e , long long & count){

    
    // base case

    if(s>=e){
        return ;
    }
     
    
     long long mid= s+(e-s)/2;

    // sort left array

    mergeSort(arr,s,mid,count);

    // sort right array
    mergeSort(arr,mid+1,e,count);

    // merge
    merge(arr,s,e,mid,count);
    


}

int main(){ 
    long long arr[4]={1,0,2,3};
    long long size=4;
    long long count=0;
    mergeSort(arr,0,size-1,count);
    cout<<count;
  


}