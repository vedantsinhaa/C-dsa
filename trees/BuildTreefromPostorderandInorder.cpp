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

 int Search(int inorder[],int start, int end, int curr){
    for(int i=0;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
        
    }
    return -1;
 }



 node* BuildTree(int postorder[], int inorder[],int start, int end){
   static int index=4;   ///static int is really imp otherwise the code wont work
    if(start>end){
        return NULL;
    }
   int curr=postorder[index];
    index--;
    node* Node=new node(curr);
    if(start==end){
        return Node;
    }
    int pos= Search(inorder,start,end,curr);
    Node->right=BuildTree(postorder,inorder,pos+1,end);  //differnce()
    Node->left=BuildTree(postorder,inorder,start,pos-1);
    
    return Node;

 }

 void print(node* root){
   if(root==NULL){
    return;
   }

    print(root->left);
    cout << root->data <<" ";
    print(root->right);
    
 }



int main()
{ int postorder[]={4,2,5,3,1};
  int inorder[]={4,2,1,5,3};
  node* root=   BuildTree(postorder,inorder,0,4);
  print(root);
   return 0;
}