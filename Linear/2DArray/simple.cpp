#include<iostream>
using namespace std;

bool isFound(int arr[3][4],int target,int m,int n){

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==target){
                    cout<<"Target found at: "<<i<<" "<<j<<endl;
                    return 1;
                }
            }
        }
        return 0;

}

int main(){
    int arr[3][4];

    cout<<"Enter elements in two Dimensional Array: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];

        }
    
    }
    cout<<"Printing your array: "<<endl;
        for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // searching element in 2D array

    cout<<"Enter element to search: "<<endl;
    int target;
    cin>>target;

    if(isFound(arr,target,3,4)){
        cout<<"Found successfully "<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    // row wise sum

    cout<<"Calculating row wise sum "<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
   
}