#include<iostream>
using namespace std;

bool linearSearch(int target,int arr[],int size){
    bool check=false;
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            check=true;
            }
    }
    return check;
}

int main(){
    int arr[5]={5,10,2,5,0};
    cout<<"Enter a number to search: "<<endl;
    int target;
    cin>>target;
    int size=5;
    bool found=linearSearch(target,arr,size);
    if(found){cout<<"We got the number you searched ";}
    else{cout<<"Opps! Its not in the array ";}

}