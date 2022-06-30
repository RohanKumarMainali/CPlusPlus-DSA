#include<iostream>
using namespace std;

void sayDigit(int n){

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return ;
    }


    int index=n%10;
    
    sayDigit(n/10);

    cout<<arr[index]<<" ";

}

int main(){

    int number;
    cin>>number;

    sayDigit(number);
    

}