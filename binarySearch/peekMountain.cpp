    #include<iostream>
    using namespace std;
    #include<vector>

    
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start=0;
        int end=arr.size()-1;
        int mid=start+((end-start)/2);
        
        
        while(start<=end){
            
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
                return mid;
            }
            
            else if(arr[mid]>arr[mid+1]){
                end=mid-1;
            }
            else if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            mid=start+((end-start))/2;
        }
        return 0;
        
    }  

    int main(){
        vector<int> arr={18,29,38,59,98,100,99,98,90};

        cout<<" Output: "<<peakIndexInMountainArray(arr);
    }