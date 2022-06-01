#include<iostream>
using namespace std;
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::vector;

    vector<int> subarraySum(int arr[], int n, long long s)
    
        // Your code here
        {
        // Your code here
        int currentSum=0;
        int left=0;
        int right=0;
         vector<int> vec={-1};

        for(int i=left;i<=right;i++){
              if(currentSum<s){
                  cout<<"currentSum:  fjasldjflsakdf: "<<currentSum<<endl;
                  currentSum+=arr[left];
                  cout<<currentSum<<endl;
                  right++;
                  cout<<"rightItem :  "<<arr[right]<<endl;
              }
              if(currentSum>s){
                  cout<<"greater";
                  currentSum-=arr[left];
                  cout<<"after subtracting left index: "<<currentSum<<endl;
                  left++;
                  cout<<"left index: "<<left<<endl;
              }
              if(currentSum==s){
                  cout<<"right index: "<<right<<endl;
                  cout<<"checkingggggggggggggg"<<endl;

                  vector<int> newVec;
                   newVec.push_back(left+1);
                   newVec.push_back(right+1);


                   return newVec;
              }


        }
        return vec;
    }

    int main(){
        int arr[10]={1,2,3,4,5,6,7,8,9,10};
        vector<int> catching;
        catching=subarraySum(arr,10,15);
        cout<<"first: "<<catching[0];
        cout<<"last: "<<catching[1];

      

    }