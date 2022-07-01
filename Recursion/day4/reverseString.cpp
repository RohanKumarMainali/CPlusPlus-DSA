#include<iostream>
using namespace std;

void reverse(string &name, int s,int e){

    if(s>=e){
        return ;
    }
    else{
        swap(name[s],name[e]);
    }

    
    reverse(name,s+1,e-1);


}

int main(){
    string name="rohan";
    int size=5;
    int start=0;
    int end=size-1;
    reverse(name,start,end);
    cout<<name;
}