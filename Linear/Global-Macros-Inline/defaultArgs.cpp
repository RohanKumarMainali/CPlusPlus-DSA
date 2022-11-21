#include<iostream>
using namespace std;

// default args always goes from right to left


void print(int arr[],int n,int start=0){

    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[3]={1,2,3};
    print(arr,3);

    return 0;

}