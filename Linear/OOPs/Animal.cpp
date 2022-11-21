#include<iostream>
using namespace std;

class Animal{

    
   
    public:

    string name = "cat";
    int age = 10;

// custom copy constructor

    //   Animal(Animal &temp){
  
    //     this ->name = temp.name;
    //     this ->age = temp.age;
    // }

// parameterized constructor
      Animal(string name, int age){
        
        this ->name = name;
        this ->age = age;
    }

    void setName(string nameOfCat){
        name = nameOfCat;
    }
    string getName(){
        return name;
    }

    void print(Animal & temp){
        cout<<temp.age;
        cout<<temp.name;

    }

};

// inheritence
class Dog : public Animal{


};


int main(){

    Animal a("DOG", 10);

    // copying constructor
    Animal first(a);

    /*

    Animal a;
    Dog d;
    cout<<a.getName()<<endl;
    d.setName("dog");

    cout<<d.getName()<<endl;
    

    // dynamically allocating memeory of type Dog

    Dog *ptr = new Dog;
    cout<<" Name of Dog : "<< (*ptr).getName()<<endl;
    cout<<" Name of Dog : "<< ptr->getName()<<endl;
    */

    return 0;

}