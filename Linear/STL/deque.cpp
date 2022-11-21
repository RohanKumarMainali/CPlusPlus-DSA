#include<iostream>
#include<deque>

using namespace std;

void print(deque<int> d){
    for(int i:d){
        cout<<i<<" ";
    
    }
    cout<<endl;
}
int main(){

    deque <int> d;
    d.push_back(5);
    d.push_front(1);
    d.push_front(15);

    d.push_front(20);

    print(d);

    d.pop_back();
    print(d);

    // deleting elements in deque
    cout<<"After deleting "<<endl;
    d.erase(d.begin()+1,d.begin()+3);
    print(d);
    cout<<d.size();

}