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


node* buildtree(node* root){

    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->left);

    return root;

}


void preordertraversal(node* root){
    //base case
    if(root==NULL){
        return;
    }    


    //recursivecase
    cout<<root->data<<" ";
    preordertraversal(root->left);
    
    preordertraversal(root->right);



}

void inordertraversal(node* root){
    //base case
    if(root==NULL){
        return;
    }    


    //recursivecase
    inordertraversal(root->left);
    cout<<root->data<<" ";
    
    
    inordertraversal(root->right);



}
void postordertraversal(node* root){
    //base case
    if(root==NULL){
        return;
    }    


    //recursivecase
    postordertraversal(root->left);
    postordertraversal(root->right);
     cout<<root->data<<" ";


}




int main()
{
   node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right = new node(7);

   preordertraversal(root);
   inordertraversal(root);
   postordertraversal(root);
   

   //creating a tree
   //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//    root= buildtree(root);

   return 0;
}