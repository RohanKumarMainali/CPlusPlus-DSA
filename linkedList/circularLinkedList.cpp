#include<iostream>
using namespace std;

class Node{
    public:
       int value;
       Node * next;
    
    Node(int value){
        this->value = value;
    }

    ~Node(){
        int value = this->value;

        if(this->next != NULL){
            delete next;
            next = NULL;
        }

        cout<<"memory freed of value : "<<value<<endl;
    }
};

void insertNode(Node * &tail, int value, int element){
    if(tail == NULL){
        Node * temp = new Node(value);
        tail = temp;
        tail->next= tail;
        return;
    }
    Node * current = tail;

    while(current->value != element){
        current = current->next;
    }
    // element found

    Node * temp = new Node(value);
    temp->next = current->next;
    current->next = temp;
}

void print(Node * tail){

    if(tail==NULL){
        cout<<"No element"<<endl;
        return;
    }

    Node* temp = tail;
    temp = temp->next;
    if(tail->next == tail){
        cout<<tail->value<<endl;
        return;
    }

    while(temp != tail){
        cout<<temp->value<<" ";
        temp =  temp->next;
    } 
    cout<<tail->value<<" "<<endl;
}

void deleteNode(Node* &tail, int value){
    Node * temp = tail;
    while(temp->next-> value != value){
        temp = temp->next;
    }
    // found;
    Node * current = temp->next;
    temp->next = current->next;
    current->next = NULL;
    
    // In case of only one element current = temp
    if(current == temp){
        tail = NULL;
        return;
    }

    // updating tail to previous if tail and current are same

    if(tail == current) tail = temp;
    delete current;

}

int main(){

    Node * tail = NULL;
    insertNode(tail,1,2);
    print(tail);
    insertNode(tail,5,1);
    print(tail);
    insertNode(tail,10,5);
    insertNode(tail,100,10);
    print(tail);

    deleteNode(tail,1);
    print(tail);
}