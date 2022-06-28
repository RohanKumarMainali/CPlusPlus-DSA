
#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;
    int ** arr=new int*[n];

    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }

    // creation is done 

    // lets take input

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> arr[i][j];
        }
    }

    // lets print it
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // NOTE: MOST IMPORTANT 
    // Release the space alloacated at heap memory

    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;

}