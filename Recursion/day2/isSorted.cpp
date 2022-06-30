#include<iostream>
using namespace std;


bool isSorted(int arr[],int size,int index){

    if (index==size-1)
    return true;

    // getting answer of smaller problem 

    bool smallerPortion = isSorted(arr,size,index+1);
    // checking if sorted

    bool ans = arr[index]<=arr[index+1];
    return smallerPortion && ans;

}

int main(){

    int arr[5] ={1,2,3,4,5};
    int arr1[5] ={1,5,3,4,5};
    int size=5;
    cout<<isSorted(arr,size,0)<<endl;
    cout<<isSorted(arr1,size,0)<<endl;

}