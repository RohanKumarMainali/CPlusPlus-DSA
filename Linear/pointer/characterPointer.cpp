#include<iostream>
using namespace std;

int main(){

    int arr[3]={0};
    char ch[6]="rohan"; 
  

    // Behind The Scene : first temp memory = 'rohan\0'
            // ch[6]='rohan'
    char *chPtr="abcde";
    // Behind The Scene : first temp memory = 'rohan\0'
            // chPtr will point to address of first character which is very risky to do

    cout<<ch<<endl; // it prints whole character array rather than its address

    char *c=&ch[0];
    cout<<c<<endl;

    char temp='z';
    char *t =&temp;
    cout<<t<<endl;
}