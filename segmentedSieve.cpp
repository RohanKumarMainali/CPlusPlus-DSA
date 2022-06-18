#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define MAX 1000000

bool seive[MAX+1];

vector<int> CreateSeive(){

   
    seive[0]=seive[1]=false;
    for(int i=2;i<=MAX;i++){
        seive[i]=true;
    }
    for(int i=2;i*i<=MAX;i++){
        if(seive[i]){
            for(int j=i*i;j<=MAX;j+=i){
                seive[j]=false;
               
            }
        }
    }
    
    

}

vector <int> generatePrimes(int N){
   vector<int> ds;
   ds.push_back(2);
  
   for(int i=3;i<=N;i+=2){
    if(seive[i]){
        ds.push_back(i);
       
    }
   }
   return ds;
    
}


int main(){
    
   CreateSeive();

   int t;
   cin>>t;
   while(t--){
        int l,r;
        cin>>l>>r;

        // step: 1 generate all primes till sqrt(r)
        vector<int> primes=generatePrimes(sqrt(r));
        for(int i=0;i<primes.size();i++){
        }

        //step :2 create a dummpy array of size r-l+1 initiallizing with 1

        int dummy[r-l+1];
        for(int i=0;i<(r-l+1);i++){
            dummy[i]=1;
        }

        //step 3: mark all prime number multiples in dummy as 0
        for(auto pr: primes){
            
            int firstMultiple=((l/pr)*pr);
            if(firstMultiple<l){firstMultiple+=pr;}
            for(int j=(firstMultiple,pr*pr);j<=r;j+=pr){
            

                dummy[j-l]=0;
            }

           
        }

        // step 4: print all primes;

        for(int i=l;i<=r;i++){
            if(dummy[i-l]==1){
                cout<<i<<" ";
            }
           
        }

   }
  

   
   
    
}