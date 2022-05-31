#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int t){
    int start=0;
    int end=n-1;
    
    int middle=start+((end-start)/2);
  
    while(start<=end){
    if(arr[middle]==t){
        return middle;
    }
    if(arr[middle]<t){
        start=middle+1;
      

    }
    if(arr[middle]>t){
        end=middle-1;     

    }
     middle=start+((end-start)/2);
    }
    return -1;
}

int main(){

    int odd[5]={2,10,15,17,19};
    int even[6]={2,5,6,9,21,25};

    cout<<"index: "<<binarySearch(odd,5,17)<<endl;
    cout<<"index: "<<binarySearch(odd,5,19)<<endl;
    cout<<"index: "<<binarySearch(even,5,5)<<endl;
    cout<<"index: "<<binarySearch(even,5,30)<<endl;




}