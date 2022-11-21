#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> maximum;
    

    priority_queue<int,vector<int>,greater<int>> mini;
    maximum.push(5);
    maximum.push(10);
    maximum.push(1);

    mini.push(25);
    mini.push(2);
    mini.push(205);

    cout<<"Maximum in max queue: "<<maximum.top()<<endl;
    cout<<"Manimum in mini queue: "<<mini.top()<<endl;





}
