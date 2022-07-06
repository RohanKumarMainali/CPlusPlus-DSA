

#include<iostream>
using namespace std;


long long merge(int arr[],int s, int e){

    long long inv_count=0;
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
    int ans=0;
    while(i<length1 && j<length2){

        if(array1[i]<array2[j]){
            arr[mainIndex++]=array1[i++];

        }
        else{
            arr[mainIndex++]=array2[j++];
            inv_count=length1-i; 
                       
        }


    }



    // if any of the array is greater than another
    while(i<length1){
  
            arr[mainIndex++]=array1[i++];
     
    }

    while(j<length2){
    
            arr[mainIndex++]=array2[j++];

        
    }
    return inv_count;


}

long long mergeSort(int arr[],int s,int e){

    
    // base case

    long long inv_count=0;
    if(s<e){
     
    
     int mid= s+(e-s)/2;

    // sort left array

    inv_count+=mergeSort(arr,s,mid);

    // sort right array
    inv_count += mergeSort(arr,mid+1,e);

    // merge

    inv_count+=merge(arr,s,e);
    }
    return inv_count;


}

int main(){ 

    int arr[42]={468, 335 ,1 ,170, 225 ,479 ,359 ,463 ,465 ,206, 146, 282 ,328 ,462 ,492 ,496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396 ,448 ,227 ,272 ,39, 370 ,413,168 ,300 ,36, 395, 204 ,312 ,323 };
    int size=42;
    cout<<mergeSort(arr,0,size-1)<<endl;

  


}