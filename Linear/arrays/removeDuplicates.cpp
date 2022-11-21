#include<iostream>
using namespace std;

   int remove_duplicate(int a[],int n){
        // code here
        int element=0;
        int count=0;
        int j=0;
        for(int i=1;i<n;i++){
            if(a[j]!=a[i]){
            j++;
            a[j]=a[i];
            
            }
        }
        return j+1;
    }
int main(){
       int arr[5]= {2, 2, 2, 2, 2};
       cout<<remove_duplicate(arr,5);

}