#include <iostream>
using namespace std;

int sqrtN(long long int N)
{
    // Write your code here.
  int start=0;
   long long unsigned end=N;
   long long unsigned mid=start+(end-start)/2;
    long long unsigned ans=-1;
    
    
        while(start<=end){
            long long unsigned sqaure=mid*mid;
            if(sqaure==N){
               
                return mid;
            }
            
            if(sqaure>N){
                end=mid-1;
            }
            else{
               ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;
                    }
    return ans;
    }

    double morePrecion(int number,int precison,int tempSolution){
        double fraction=1;
        double ans=tempSolution;
        for(int i=0;i<precison;i++){
            
            fraction=fraction/10;

            for(double j=ans;j*j<number;j=j+fraction){
            ans=j;

            }
        }
        return ans;

    }

    int main(){
        cout<<"Enter a number to find it's square root: "<<endl;
        long long int number;
        cin>>number;
        int tempSolution=sqrtN(number);
        cout<<"The answer is: "<<morePrecion(number,3,tempSolution);

    }