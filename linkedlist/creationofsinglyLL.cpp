#include <iostream>
using namespace std;


class Node {

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data=data;
        this -> next=NULL;

    }
};
void insertattail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next=temp;
    tail= tail->next;
}

void insertathead(Node* &head ,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}
void print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{  
    Node* node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<<node1->next<<endl;
   Node*head=node1;
    insertattail(head,12);
    print(node1);
    insertathead(head,5);
    print(node1);



   return 0;
}