#include<iostream>
using namespace std;

class Node
{
public:
int data;
Node* left;
Node* right;


};
Node* createnode(int data)
{
    Node* newnode=new Node();
     newnode->data=data;
     newnode->left=nullptr;
     newnode->right=nullptr;
    return newnode;

}

void printtree(Node* root)
{
      if(root==nullptr)
      return;

      cout<<root->data<<" ";
        printtree(root->left);
         printtree(root->right);



}