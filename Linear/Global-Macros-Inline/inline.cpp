#include<iostream>
using namespace std;

// inline function also works like macro and saves time by replacing function calls
// also there is no extra memory usage because we used reference variable


inline int getMax(int &a, int &b){
    return (a>b) ? a : b;
}


int main(){

    int a=5,b=7;
    cout<<getMax(a,b)<<endl;

    a+=7;
    cout<<getMax(a,b);


    return 0;
} 