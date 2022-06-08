#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);
    v.push_back(15);
    cout<<binary_search(v.begin(),v.end(),5);
}