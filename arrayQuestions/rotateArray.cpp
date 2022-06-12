

#include<iostream>
using namespace std;

void reverse(int arr[], int k,int n){

        int target[n];
        for(int i=0;i<n;i++){
            
            target[(i+k)%n]=arr[i];

        }
        arr=target;

           for(int i=0;i<n;i++){
            
           cout<<" "<<arr[i];

        }
  

}

int main(){

    int arr[5]={1,5,4,7,10};
    int k=3;
    int n=5;
    cout<<7%5<<endl;
    cout<<4%5<<endl;
    reverse(arr,k,n);
    
}