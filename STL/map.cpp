#include<iostream>
#include<map>
#include<unordered_map>
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
    cout<<"Finding the frequency: "<<m.count(1)<<endl;

    unordered_map <int,int> map;
    map[1]=5;
    map[2]=10;
    map[3]=15;
    
    for(auto & rs: map){
        cout<<" "<<rs.first << " "<<rs.second<<endl;
    }
    auto result=map.find(2);

    if(result != map.end()){
        cout<<"Found:  "<<result->first<<" "<<result->second<<endl;
    }

}