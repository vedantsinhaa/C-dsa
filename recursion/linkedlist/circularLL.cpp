#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //destructor

    ~Node(){
        int value= this->data;
        if(this->data!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertatvalue(Node* &tail,int element,int d){


    if(tail==NULL){
        Node* newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }

    else{
        //traversal to the element
        Node* curr= tail;
        while(curr->data!=element){
            curr=curr->next;

        }

        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;



    }

}

void print(Node* &tail){
    Node* temp=tail;
    
}


int main()
{
  Node* tail= NULL;

  insertatvalue(tail,5,3);
  print(tail);


   return 0;
}