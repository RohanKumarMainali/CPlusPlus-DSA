#include<iostream>
using namespace std;

//void update(int **ptr1){

    //ptr1=ptr1+1 // this will give no changes because it is pass by value

  //  *ptr1=*ptr1+1;  // this changes the value stored at ptr 

   // **ptr1=**ptr1+1; // this will change value to i



//}

int main(){

        /*
    int i=5;
    int *ptr=&i;


    int **ptr1=&ptr;


    cout<<"First pointer: "<<ptr<<endl;
    cout<<"second pointer: "<<ptr1<<endl;
    cout<<"First pointer address : "<<&ptr<<endl;

    cout<<endl<<endl<<"Printing value of i from different ways "<<endl;

    cout<<"first: "<<i<<endl;
    cout<<"second: "<<*ptr<<endl;
    cout<<"third: "<<**ptr1<<endl;

    cout<<endl<<endl<<"Printing address of i from different ways "<<endl;
    cout<<"first: "<<&i<<endl;
    cout<<"Second: "<<ptr<<endl;
    cout<<"Third: "<<*ptr1<<endl;


   cout<<endl<<endl;
   cout<<"before: "<<i<<endl;
   cout<<"before: "<<ptr<<endl;
   cout<<"before: "<<ptr1<<endl;

   update(ptr1);
   cout<<endl<<endl;
   cout<<"after: "<<i<<endl;
   cout<<"after: "<<ptr<<endl;
   cout<<"after: "<<ptr1<<endl;
    */

   int i=110;
   int *ptr=0; //null pointer
   *ptr=i; // this will through run time error: segmentation error
   cout<<*ptr<<endl;


}