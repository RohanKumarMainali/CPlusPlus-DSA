#include<iostream>
using namespace std;

class Node{
    public:

    int value;
    Node * next;
    Node * prev;

    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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

void print(Node * &head){
    Node * temp = head;
    int i=0;

    cout<<endl;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
        i++;
    }
    cout<<endl<<endl;
}

void insertFirst(Node* & head,Node * &tail,int value){
    if(head == NULL){
        Node * temp = new Node(value);
        head = temp;
        tail = temp;
    }
    else{
        Node * temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertLast(Node* &head,Node * &tail, int value){
    
    if(tail == NULL){
        Node * temp = new Node(value);
        tail = temp;
        head = temp;
    }
    else{
        Node * temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
    
}


void insertMiddle(Node * &head, Node * &tail,int index,int value){
    
    Node * temp = head;

    if(index == 0){
        insertFirst(head,tail,value);
        return;
    }
    int i=0;
    while(i<index-1){
        temp = temp->next;
        i++;
    }

    if(temp->next == NULL){
        insertLast(head,temp,value);
        return;
    }
    
    Node * toInsert = new Node(value);

    toInsert->next = temp->next;
    temp->next->prev = toInsert;
    temp->next = toInsert;
    toInsert->prev = temp;

}

void deleteNode(Node * &head,Node *& tail,int index){
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
     
    Node * current = previous->next;
    if(current->next ==NULL){
        previous->next = NULL;
        current->prev = NULL;
        delete current;
        tail = previous;
        return;
    }

    current->prev = NULL;
    previous->next =current->next;
    previous->next->prev = previous;
    current->next = NULL; 
    delete current;

}


int main(){

    Node * head = NULL;
    Node *tail = NULL;

    insertFirst(head,tail,50);
    insertFirst(head,tail,50);
    insertLast(head,tail,100);
    print(head);

    cout<<"head is : "<<head->value<<endl;
    cout<<"tail is : "<<tail->value<<endl<<endl;
    insertMiddle(head,tail,2,15);
    print(head);

    cout<<"head is : "<<head->value<<endl;
    cout<<"tail is : "<<tail->value<<endl<<endl;

    deleteNode(head,tail,3);
    print(head);

    cout<<"head is : "<<head->value<<endl;
    cout<<"tail is : "<<tail->value<<endl<<endl;
}
