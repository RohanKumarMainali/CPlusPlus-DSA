#include<iostream>
using namespace std;

bool checkPalindrome(string & name, int s,int e){

    if(s>=e){
        return true;
    }
    if(name[s]!=name[e])
        return false;

    checkPalindrome(name,s+1,e-1);  

}

int main(){

    string name="roooslkdf";
    cout<<checkPalindrome(name,0,name.length()-1);

}