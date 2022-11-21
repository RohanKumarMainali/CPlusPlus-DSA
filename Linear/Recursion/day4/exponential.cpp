#include<iostream>
using namespace std;

int exponential(int number,int power){
   
    // base case
    if(power==0){
        return 1;
    }

     if(power==1){
        return number;
    }

    int ans= exponential(number,power/2);

    if(power%2==0){
       return ans * ans;
    }
    else{
        return number* ans*ans;
    }
  
}

int main(){

    int number=5;
    int power=5;
    cout<<exponential(number,power);
}