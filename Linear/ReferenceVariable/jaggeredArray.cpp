#include<iostream>
using namespace std;

int main(){

    int arr1[4]={1,2,3,4};
    int arr2[3]={1,2,3};

    int * jagged[2]={arr1,arr2};

    int size[2]={4,3};

      int k=0;
    for(int i=0;i<2;i++){

        // ptr pointer points to ith row address
        int *ptr=jagged[i];
      

        for(int j=0;j<size[k];j++){
            cout<< *ptr<<" ";
            ptr++;
        }
        k++;
        // move to next row
        jagged[i]++;

        cout<<endl;

    }


    return 0;
}