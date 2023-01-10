#include<iostream>
#include<queue>
using namespace std;

// creating binary Tree

class Node{
    public: 
        int data;
        Node * left;
        Node * right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

// levelOrderTraversal (Breath First Search) : usage queue

void levelOrderTraversal(Node * root){

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    // using null as a seperator of level
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();

        // if temp == NULL old level is traversed
        if(temp==NULL) {
            cout<<endl;
            // still more children left
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

// differnet order travesel
// inorder   LNR

void inOrder(Node * root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
// pre Order : NLR

void preOrder(Node * root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// post Order : LRN

void postOrder(Node * root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


 
Node* buildTree(Node * root){
    cout<< "Enter the data for node: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for right of : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){

    // 10 5 1 -1 -1 2 -1 -1 7 2 -1 -1 1 -1 -1
    Node * root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    cout<<"Pre order traversal "<<endl;
    preOrder(root);
    return 0;

}
