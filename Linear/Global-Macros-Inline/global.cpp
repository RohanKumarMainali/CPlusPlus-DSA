#include<iostream>
using namespace std;

// using global variable is very bad practice because it can be changed by any functions
// just use pass by reference instead of global variables

int pi=3.14;

int main(){

    cout<<pi<<endl;
    return 0;
}