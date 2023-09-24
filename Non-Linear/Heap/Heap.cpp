#include<iostream>
using namespace std;

class heap{
  public:
    int arr[50];
    int size;
    heap(){
      size = 0;
      arr[size] = -1;
    }
    void insert(int val){
      size++;
      int index = size;
      while(index>=1){
        arr[index] = val;
        int parent = index/2;
        if(parent>=1 && arr[parent]<arr[index]){
          swap(arr[parent],arr[index]);
          index = parent;
        }
        else return;
      }
    }

    void print(){
      for(int i = 0;i<=size;i++){
        cout<<arr[i]<<" ";
      }
    }
};

int main(){
  heap hp;
  hp.insert(5);
  hp.insert(15);
  hp.insert(2);
  hp.insert(20);
  hp.insert(30);
  hp.insert(9);
  hp.print();
  return 0;
}
