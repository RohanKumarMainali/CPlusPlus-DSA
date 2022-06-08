#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(10);
    s.insert(1);
    s.insert(9);
    s.insert(20);

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    
    it++;

    s.erase(it);
     for(int i:s){
        cout<<i<<" ";
    }

    set<int>::iterator index=s.find(10);

    for(index;index!=s.end();index++){
        cout<<*index;
    }



}