#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this -> value = value;
        this -> next = NULL;
    }

    ~Node(){
        int value = this->value;
        // free memory
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed for value "<<value<<endl;
    }

};

void insertFirst(Node* &head,int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

void insertLast(Node * &tail, int value){
    Node * temp = new Node(value);
    tail->next = temp;
    tail = temp;
}


void deleteNode(int index, Node * &head){
    
    if(index == 0){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node * previous = head;
    int i=0;
    while(i<index-1){
        previous = previous->next;
        i++;
    }
    Node *current = previous->next;
    previous->next = current ->next;

    // removing current-> next to point at some node because it has to be deleted 
    current ->next = NULL;
    delete current;

}

void insertMiddle(Node * &head, int value, int index){
    
    // if index ==0
    if(index == 0){
        insertFirst(head,value);
        return;
    }

    Node *temp = head;
    int i=0;
    while(i<index-1){
        temp = temp->next;
        i++; 
    }

    Node *tail = temp;
    if(temp->next == NULL){
        insertLast(tail,value);
        return;
    }

    Node * nodeToInsert = new Node(value);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;


}



void print(Node * &head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main(){

    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
  
    // cout<<node1 -> value <<endl;
    // cout<<node1 -> next <<endl;

    insertFirst(head,50);
    insertFirst(head,150);
    insertLast(tail,200);

    print(head);

    insertLast(tail,25);
    print(head);

    // insertMiddle(head,5000,2);
    // print(head);
    // insertMiddle(head,-50,3);
    // print(head);
    // insertMiddle(head,-50,7);
    // insertMiddle(head,-1,8);
    // print(head);
    deleteNode(4,head);
    print(head);


    return 0;
}