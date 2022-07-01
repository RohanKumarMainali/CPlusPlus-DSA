#include<iostream>
using namespace std;

void print(int arr[],int size){

     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


void selectionSort(int arr[], int size,int start){
   

    // base case
    
    if(size-start==1 ){
        return;
    }

   print(arr,size);

    // swaping with smallest number in first position
    int min=arr[start];

    for(int i=start+1;i<size;i++){
        if(arr[i]<min){
            min=i;
        }
        
    }
    swap(arr[min],arr[start]);

    // recursive call
    selectionSort(arr,size,start+1);
   

}

int main(){
    
    int arr[5]= {5,10,3,1,5};
    int size=5;
    selectionSort(arr,size,0);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}