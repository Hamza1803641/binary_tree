#include"header_tree.h"

int main()
{
    MyTree obj;

    obj.insert(10);
    obj.insert(20);

    obj.insert(5);
    obj.insert(30);
    obj.insert(4);
    obj.insert(40);

    obj.inorder();
    cout << endl;

    obj.preorder();
    cout << endl;

    obj.postorder();

    //FOR find  minimum like sec minimum in tree 
    obj.min(4);


    
    return 0;

}
