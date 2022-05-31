#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    int temp=0;
    for(int i=0;i<size-1;i++){
        temp=arr[i];
        cout<<"temp"<<temp<<endl;
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
    }
}

void findUnique(int arr[],int size){
    int dublicateCount=0;

    int first=arr[0];
    int newArr[100];
    for(int i=0;i<size;i++){
    int count=0;

        for(int j=0;j<size;j++){
            if(arr[i]==arr[j])  {
                count++;
            }
            if(count>1){
                newArr[i]=arr[j];
                dublicateCount++;
          
                cout<<endl<<"dublicate"<<arr[i];
                count+=10;
            }

        }
    }

  
}

int main(){
    // Swap alternate the array
    int arr[100];
    int size;
    cin>>size;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
       cout<<"Before reverse "<<endl;
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
        
    }
 
 
    // swapAlternate(arr,size);
    findUnique(arr,size);

    // cout<<"After reverse "<<endl;
    // for(int i=0;i<size;i++){
    //     cout<<" "<<arr[i];

    // }
}