#include<iostream>
using namespace std;

void update(int &k){
    k++;
}

int main(){

    /*
    int i=5;
    int &j=i; // creating reference variable

    cout<<endl<<i<<endl;

    i++;
    j++;
    cout<<i<<endl;
    */

   int n=5;
   cout<<"Before: "<<n<<endl;

   update(n);
   cout<<"After: "<<n<<endl;

}