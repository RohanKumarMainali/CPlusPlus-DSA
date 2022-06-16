#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        ch=ch-'A'+'a';
    }
    return ch;
}



int main(){

    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    cout<<"Hello Senior Engineer "<<name<<endl;
    char c='B';
    cout<<toLowerCase(c);
    cout<<c;


}