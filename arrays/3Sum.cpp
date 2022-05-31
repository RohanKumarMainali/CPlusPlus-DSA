#include<iostream>
using namespace std;
#include <vector>;
#include<set>

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==K){
                    vector<int> temp;
                    
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());

                  if(find(ans.begin(),ans.end(),temp)==ans.end())

                  {   ans.push_back(temp);

                  }



                }
            }
        }
    }
    
}
int main(){

}