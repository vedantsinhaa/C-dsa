#include <iostream>
#include <queue>
using namespace std;

class node{
   public:
   int data;
   node* right;
   node* left;


   node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   }

};

void levelOrdertraversal(node* root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left !=NULL){
            q.push(temp->left);
        }
        if(temp->right !=NULL){
            q.push(temp->right);
        }
    }

}






int main()
{
   node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(7);
   root->left->right=new node(6);
   root->right->left=new node(5);
   root->right->right = new node(4);
//1 3 2 7 6 5 4
  levelOrdertraversal(root);
   

   //creating a tree
   //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//    root= buildtree(root);

   return 0;
}