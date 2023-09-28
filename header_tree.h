#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

};

class MyTree 
{
    Node* root;

    void Inorder(Node* root)
    {
        if (root == nullptr)
            return;

        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
    
    void Preorder(Node* root)
    {
        if (root == nullptr)
            return;
    
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }

    void Postorder(Node* root)
    {
        if (root == nullptr)
            return;
    
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }


    void Insert(int value,Node*& root)
    {

        if (root == nullptr)
        {
            root = new Node;
            root->data = value;
            root->left = nullptr;
            root->right = nullptr;
        }
        else if (value < root->data)
        {
            Insert(value, root->left);
                
        }                  
        else if (value >= root->data)
        {                  
            Insert(value, root->right);

        }
    }

//for find mini minimum element like second minimum
	void MINI(Node* r,bool& flag,int sm)
	{
		static int s = 0;
		if (r == nullptr)
			return;
		
		MINI(r->left,flag,sm);
		if (root->Data < sm)
		{
			sm = root->Data;
		}
		s++;
		if (s == sm)
		{
			flag = true;
			cout <<" smallest" << r->Data;
			return;
		}

		MINI(r->right, flag, sm);
	}

public:
    MyTree()
    {
        root = nullptr;
    }

    void insert(int Data)
    {
        Insert(Data,root);
    }

    void inorder()
    {
        Inorder(root);
    }
    
    void preorder()
    {
        Preorder(root);
    }

    void postorder()
    {
        Postorder(root);
    }

    void min(int value)
	{
	    bool flag = false;
            MINI(root,flag,value);
	}




};
