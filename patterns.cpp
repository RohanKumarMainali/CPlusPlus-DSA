#include <iostream>
using namespace std;

int main(){
    // int row,column;

    // cin >>row>>column;

    // for(int i=0;i<row;i++){
    //     cout<<"*";


    //     for(int j=0;j<column;j++){

    //         if(i==0 || i==(row-1)){
    //             cout <<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }

    //     }
    //     cout<<"*";

    //         cout<<"\n";

    // }


    int n;
    cin>>n;
//     for(int i=1;i<=n;i++){

//         for(int j=n;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }

//     for(int i=n;i>=1;i--){

//         for(int j=n+1;j>i;j--){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }

// // More time complex
//     for(int i=n;i>=1;i--){

//        for(int j=1;j<i;j++){
//             cout<<" ";
//        }
//        for(int k=n+1;k>i;k--){
//            cout<<"*";
//        }
//        cout<<endl;
//     }

//     // More optimized way

//   for(int i=1;i<=n;i++){

//       for(int j=1;j<=n;j++){
//           if(j<=n-i){
//               cout<<" ";
//           }
//           else{
//               cout<<"*";
//           }
//       }
//       cout<< endl;
//   }

//   for(int i=1;i<=n;i++){
//       for(int j=0;j<i;j++){
//           cout<<i;
          
//       }
//       cout<<endl;

//   }

// //   Flyod's Triangle
// int number=0;

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<i+1;j++){
//             number+=1;
//             cout<<number;
            
//         }
//         cout<<endl;
//     }

//Butterfly pattern

// int count=0;

//     for (int i=1;i<=n;i++){
//             count=2*n-(i*2);

//         for(int j=1;j<=i;j++){
//             cout<<"*";         
//         }
//           for(int k=0;k<count;k++){
//                 cout<<" ";
//             }
//              for(int j=1;j<=i;j++){
//             cout<<"*";
          
//         }
//         cout<<endl;

//     }
//     for (int i=n;i>=1;i--){
//             count=2*n-(i*2);

//         for(int j=1;j<=i;j++){
//             cout<<"*";          
//         }
//           for(int k=0;k<count;k++){
//                 cout<<" ";
//             }
//              for(int j=1;j<=i;j++){
//             cout<<"*";   
//         }
//         cout<<endl;

//     }

// Nested pattern

    for(int i=1;i<=n;i++){
        int count=1;

        for(int j=n;j>=i;j--){
            cout <<count;
            count++;
        }
        cout<< endl;
    }

    //0-1 Pattern

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            if((i+j)%2==0) 
            {cout<<1;}
            else{ cout<<0;}
        }
        cout <<endl;
    }

    // pyramid pattern

    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<< endl;
    }
       for(int i=n;i>=1;i--){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<< endl;
    }

    //rectangle pattern


    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}

