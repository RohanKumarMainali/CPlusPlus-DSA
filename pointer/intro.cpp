#include<iostream>
using namespace std;



int main(){

    int a=5;
    int *ptr=&a;
    // printing the address of a  
    // 
    cout<<"Address of a which is stored in ptr variable: "<<ptr<<endl;
    cout<<"Value of a : by de-referencing: "<<*ptr<<endl; // de-referencing operator gives the value which is present in the given address

    // different method to initialize pointer;

    int num=5;
    int *ptr1=0;
    ptr1=&num;
     cout<<"Value of num : by de-referencing:  "<<*ptr1<<endl;
     (*ptr1)++;
     cout<<"Value of num after increment : "<<*ptr1<<endl;

}