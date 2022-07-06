#include<iostream>
using namespace std;

int getElement(int arr[] ,int start, int end){

    int pivot = arr[start];
    int count=0;

    for(int i=start+1;i<=end;i++){
        if(arr[i]<= pivot )
            count++;
    }
    int pivotPosition = start + count;
    // now we got the position of element to be placed

    // lets place it on that position by swapping

    swap(arr[start],arr[pivotPosition]);
    // now lets modify the array in such a way that every element on left side are less than pivotElement 
    // and every element on right side are greater than pivot element

    int i=start;
    int j=end;
    while(i<pivotPosition && j>pivotPosition){

        while(arr[i]< pivot){
            i++;
        }
        
        while(arr[j]>pivot){
         j--;
        }

        // comes in this line only if the both left are right are as expected or it found number to be swapped

        if(i<pivotPosition && j>pivotPosition){
            swap(arr[i++],arr[j--]);
        }
    
    }



    return pivotPosition;

}


void quickSort(int arr[],int start, int end){
    
    // base case
    if(start>=end){
        return;
    }

    int pivot = getElement(arr,start,end);
    // for left partition
    quickSort(arr,start,pivot-1);

    // for right partition
    quickSort(arr,pivot+1,end);

}


int main(){

    int arr[6] = {5,1,1,2,0,0};
    int size=6;
    quickSort(arr,0,size-1);

    // lets print

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}