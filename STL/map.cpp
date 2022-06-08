#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="rohan";
    m[2]="kumar";
    m[3]="Mainali";
    m[10]="Mainali";
    m.insert({5,"roshan"});

    // The search algorithm uses either red black tree or balance tree so its time complexity is O(logn)
    // unordered_map uses hash table so its time complexity is O(1)

    for(auto i:m){
        cout<<"id "<<i.first<<" : "<<i.second<<endl;
    }
    cout<<"Finding the frequency: "<<m.count(1);
}