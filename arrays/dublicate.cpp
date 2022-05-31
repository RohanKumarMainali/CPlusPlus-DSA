#include<iostream>
using namespace std;

int findDuplicate(int arr[],int size) 
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }	
    cout<<"First xor: "<<ans<<endl;
    for(int i=0;i<size;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int arr[5]={1,2,3,2,4};
    int size=5;

    int array[6]={1,5,2,4,3,5};
    int ans=15;
    for(int i=1;i<6;i++){
        ans=ans^i;
    }
    cout<<"my test"<<ans;

    cout<<findDuplicate(arr,size);

}