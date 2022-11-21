#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int > v={1,2,3,4};
    cout<<"Capacity--> "<<v.capacity()<<endl;

    for(int i:v){
        cout<<i<<endl;
    
    }

    v.push_back(5);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    cout<<"Size--> "<<v.size()<<endl;
    cout<<"At--> "<<v.at(2)<<endl;


       for(int i:v){
        cout<<i<<endl;
    
    }
     cout<<"Front--> "<<v.front()<<endl;
    cout<<"Back--> "<<v.back()<<endl;

    v.pop_back();
    cout<<"After popping---"<<endl;
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    
    }

    v.clear();
     cout<<"Capacity--> "<<v.capacity()<<endl;
    cout<<"Size--> "<<v.size()<<endl;

}