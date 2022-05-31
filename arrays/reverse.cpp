#include<iostream>
using namespace std;

    void reverseArr(int arr[],int size){
        int temp=0;
        for(int i=0;i<(size/2);i++){
            temp=arr[i];
            arr[i]=arr[size-i-1];
            arr[size-i-1]=temp;
        }
        cout<<"After reversing: "<<endl;
        for(int i=0;i<size;i++){
            cout<<" "<<arr[i];
        }
    }

    // another way to reverse

    void reverse(int arr[],int size){
        int start=0;
        int end=size-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

int main(){

    int arr[100];
    int size;
    cin>>size;
    cout<<"Enter the elements in array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Before reversing array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    
    reverse(arr,size);

     cout<<endl<<"After reversing array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }


}