#include <iostream>
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



void Inorderprint(node* root){
    if(root==NULL){
        return;
    }

    Inorderprint(root->left);
    cout<<root->data<<" ";
    Inorderprint(root->right);
}

node* BuildBST(node* root,int val){

  if(root==NULL){
    return new node(val);
  }

    if(val<root->data){
        root->left=BuildBST(root->left,val);
    }
    else{
        root->right=BuildBST(root->right, val);
    }
}


int main()
{  
    node* root=NULL;
    root=BuildBST(root,5);
    BuildBST(root,1);
    BuildBST(root,2);
    BuildBST(root,3);
    BuildBST(root,4);
   
    BuildBST(root,7);


  Inorderprint(root);
   return 0;
}