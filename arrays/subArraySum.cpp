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
                  currentSum+=arr[i];
                  cout<<currentSum<<endl;
                  right++;
              }
              if(currentSum>s){
                  cout<<"greater";
                  currentSum-=arr[left];
                  cout<<"after subtracting left index: "<<currentSum<<endl;
                  left++;
                  cout<<"left index: "<<left<<endl;
              }
              if(currentSum==s){
                   vec.push_back(left+1);
                   vec.push_back(right+1);
                   cout<<vec[0];
                   cout<<vec[1];
                   cout<<vec[2];


                   return vec;
              }


        }
        return vec;
    }

    int main(){
        int arr[5]={1,5,10,20,5};

        subarraySum(arr,5,15);
      

    }