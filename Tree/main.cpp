#include "tree.h"

int main()
{
    adrNode root = NULL;
    int x[9] = {5,3,9,10,4,7,1,8,6};

    for (int i = 0; i < 9; i++) {
        adrNode Node = newNode(x[i]);
        root = insertNode(root, Node);
    }
    cout << "int x[9] = ";
    for (int i = 0; i < 9; i++) {
        cout << x[i] << " ";
    }
    cout << "\n\nPreOrder\t\t  : ";
    printPreOrder(root);

    cout << "\nDescendant of Node 9\t  : ";
    printDecendant(root, 9);
    cout << "\n\nSum of BST Info\t\t  : " << sumNode(root);
    cout << "\nNumber of Leaves\t  : " << countLeaves(root);
    cout << "\nHeight of Tree, with Rank : " << heightTree(root)-1 << "\t and Depth : " << heightTree(root);
    cout << endl;

    return 0;
}
