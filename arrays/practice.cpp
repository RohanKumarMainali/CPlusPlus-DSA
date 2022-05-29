    #include<iostream>
    using namespace std;

    int Max(int array[],int size){
            int maximum=INT64_MIN;
            for(int i=0;i<size;i++){
              maximum=max(maximum,array[i]);
            }
            return maximum;
        }

          int Min(int array[],int size){
            int minimum=INT64_MAX;
            for(int i=0;i<size;i++){
               minimum=min(minimum,array[i]);
            }
            return minimum;
        }

    int main(){

        // int arr[10];
        // int size=sizeof(arr)/sizeof(arr[0]);
        // for(int i=0;i<size;i++){
        //     arr[i]=5;
        // }
        // for(int i=0;i<size;i++){
        //     cout<<arr[i]<<endl;
        // }

        //Maximum and minimumn in an array

        

        int arr[100];
        int size;
        cout<<"Enter size of an array: ";

        cin>>size;  

        cout<<"Enter the numbers:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<"The maximum number is: "<<Max(arr,size)<<endl;
        cout<<"The minimum number is: "<<Min(arr,size)<<endl;


    }