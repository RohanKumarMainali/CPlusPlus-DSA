#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){

    if(size==0 || size==1){
        return ;
    }
    
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);

}
int main(){

    int arr[5]= {5,10,3,1,5};
    int size=5;
    bubbleSort(arr,size);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}