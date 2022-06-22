#include<iostream>
using namespace std;

int print(int *p){
    cout<<p<<endl;
}

void update(int *p){

    // this will not update the original pointer value because it is pass by value
    *p=(*p)+1;        // but using * operator we can update the num value
}
int sum(int arr[],int n){
    cout<<"Proof that it recieves a pointer: "<<sizeof(arr)<<endl;
    int total=0;
    for(int i=0;i<n;i++){
         total+=arr[i];
    }
    return total;
}

int main(){

    int num=5;
    int *p=&num;
    cout<<p<<endl;

    cout<<"before Update: "<< p<<endl;

    cout<<"after update"<<endl;
    update(p);
    cout<<p<<endl;
    cout<<*p;

    cout<<"----------------------"<<endl;

    int arr[6]={1,5,7,8,10,12}; // Actually it only sends the pointer instead of whole array to the function

            // The advantage of sending pointer rather than whole array is we can send partial arrays 
    cout<<"Total Sum: "<<sum(arr,6)<<endl; 
    cout<<"Total Sum of partial array: "<<sum(arr+3,3)<<endl; 

    return 0;

}