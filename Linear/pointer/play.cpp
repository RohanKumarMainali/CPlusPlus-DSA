#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *ptr= &num;
    int *q=ptr;

    cout<<"address of num: "<<&num<<endl;

    cout<<"address of num through ptr: "<<ptr<<endl;
    cout<<"address of num through q: "<<q<<endl;

    cout<<"----------------------------"<<endl;

    cout<<"address of ptr: "<< &ptr<<endl;
    cout<<"address of q: "<< &q<<endl;


    cout<<"------------------------------"<<endl;
    cout<< "value of num from de-refrencing: "<<*ptr<<endl;
    cout<< "value of q: from de-referencing: "<<*q<<endl;

    cout<<"-----------------------"<<endl;
    // arithmetics of pointer 
    int i=3;
    int *p= &i;
    cout<<"before :"<<p<<endl;
    *p=*p+1;
    cout<< *p<<endl;

    p=p+1; // this jumps to another address by 1 byte i.e 4 bit because pointer type is integer here
    cout<<p;

}