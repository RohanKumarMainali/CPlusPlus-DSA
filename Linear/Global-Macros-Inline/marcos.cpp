#include<iostream>
using namespace std;
#define pi 3.14
 
// The main advantage of using macros is it doesnot requires additional memory and 
// its value cannot be cannot unlike global variables

int main(){

    int n=5;
    double area=pi*n*n;
    cout<<"Area of circle is : "<<area; 

    return 0;
}