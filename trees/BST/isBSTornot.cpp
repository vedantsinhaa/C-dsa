#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node* right;
    node* left;


    node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};

bool isBST(node* root,node* min=NULL, node* max=NULL){
   if(root==NULL){
    return true;
   }
    if(root->data <= min->data && min!=NULL){
        return false;
    }
    if(root->data >= max->data && max!=NULL){
        return false;
    }

    bool leftValid= isBST(root->left,min,root);
    bool rightValid= isBST(root->right,root,max);

    return (leftValid and rightValid);
}









int main()
{
    node* root1 = new node(5);
    root1->left= new node(3);
    root1->right=new node(8);
    
    if(isBST(root1,NULL,NULL)){
        cout<<" Valid BST "<<endl;
    }
    else{
        cout<<" Invalid BST"<<endl;
    }
   return 0;
}