#include<iostream>
using namespace std;

int main(){
/*
    int arr[5]={10,16,15,17,20};

    cout<<"address of first location: 1st method  "<<arr<<endl;
    cout<<"address of first location: 2nd method  "<<&arr[0]<<endl;
    cout<<"address of first location: 3rd method  "<<&arr<<endl;

    cout<<"----Playing-------------------"<<endl;

    cout<<"4th : "<<*arr<<endl;
    cout<<"5th : "<<*(arr+1)<<endl;
    cout<<"6th : "<<*(arr)+1<<endl;

    cout<<" another way of accessing element: "<<endl;

    // internal working ---->  arr[i]=*(arr+i)  so i[arr]=*(i+arr)

    cout<<"7th : "<<0[arr]<<endl;
    cout<<"8th : "<<1[arr]<<endl;
  */
        int arr[5]={10,16,15,17,20};
        // cout<<"array size: "<<sizeof(arr)<<endl;
        // cout<<"size of first element : "<<sizeof(*arr)<<endl;
        // cout<<"size of address for array first element "<<sizeof(&arr)<<endl;

        // int *ptr=&arr[0];
        // cout<<"pointer size: "<<sizeof(ptr)<<endl;
        // cout<<"size of value : "<<sizeof(*ptr)<<endl;
//-----------------------------------------------------------

    // symbol table cannot be modified

            // arr--->120
            // when try to arr+1 it tries to modify symbol table which is impossible

            // while doing ptr=ptr+1 it jumps by 4 byte 


    //ERROR
    // arr=arr+1;

    int *ptr=arr;
    ptr=ptr+1;
  
    cout<<"Ptr: "<<ptr;
    cout<<"Ptr: "<<&ptr;

    

}