#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){

    if(size==0)
    return false;

    if(arr[0]==target){
        return true;
    }

    bool remainingPart= linearSearch(arr+1,size-1,target);
    return remainingPart;

}


int main(){

    int arr[5]={1,2,3,4,5};
    int target=1;
    cout<<linearSearch(arr,5,target);

}