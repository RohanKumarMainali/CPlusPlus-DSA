#include<iostream>
using namespace std;

void print(int *ptr,int n){

    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }


}

int main(){
    
    cout<<"Please enter the size of an array: "<<endl;
    int n;
    cin>>n;
    //int arr[n]; // this is static memory allocation which can give you error

    // allocating dynamically in heap memory

    int *ptr=new int[n];
    cout<<"Enter the elements in array : "<<endl;

    for(int i=0;i<n;i++){
        cin>>*(ptr+i); // or ptr[i] is same 
    }
     
     print(ptr,n);
     delete []ptr;
}