
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

void pre_order(Node* root)
{
      if(root==nullptr)
      return;

      cout<<root->data<<" ";
        pre_order(root->left);
         pre_order(root->right);
}

//in_order
void in_order(Node* root)
{
    if (root == nullptr)
        return;

    pre_order(root->left);
    cout << root->data << " ";
    pre_order(root->right);
}
//post_order


void post_order(Node* root)
{
    if (root == nullptr)
        return;

    pre_order(root->left);
    pre_order(root->right);
    cout << root->data << " ";

}
