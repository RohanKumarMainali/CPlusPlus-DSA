#include<iostream>
using namespace std;


void walking(int src,int dest){

    if(src==dest){
    cout<<"pahuch gaya";
    return ;
    }
    cout<< " steps: "<<src<<endl;

    walking(src+1,dest);

}

int main(){

    walking(1,10);

    return 0;
}