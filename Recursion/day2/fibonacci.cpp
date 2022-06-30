#include<iostream>
using namespace std;

int fibonacci(int n){

    if(n==0 || n==1)
    return n;

    int smallerPortion1=fibonacci(n-1);
    int smallerPortion2=fibonacci(n-2);

   

    return smallerPortion1 + smallerPortion2;

}

int main(){

    int number;
    cin>>number;

    cout<<fibonacci(number);

    return 0;
}