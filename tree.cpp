#include"header_tree.h"

int main()
{
     
     Node* root=createnode(1);

      root->right=createnode(3);
      root->left=createnode(2);
      
     root->left->left=createnode(4);
     root->left->right=createnode(5);
     
        root->left->left->left=createnode(8);
     root->left->left->right=createnode(9);

     root->left->right->right=createnode(11);
     root->left->right->left=createnode(10);
   ///


     root->right->left=createnode(6);
     root->right->right=createnode(7);


    
     

     root->right->left->right=createnode(13);
     root->right->right->left=createnode(14);


     
      
     
        printtree(root);



    return 0;

}