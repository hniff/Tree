#include "tree.h"

adrNode newNode(infotype x) {
    adrNode p = new node;
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

adrNode insertNode(adrNode root, adrNode Node) {
    if (root == NULL) {
        return Node;
    }
    if (Node->data < root->data) {
        root->left = insertNode(root->left, Node);
    } else {
        root->right = insertNode(root->right, Node);
    }
    return root;
}

adrNode findNode(adrNode root, infotype x) {
    if (root == NULL) {
        return NULL;
    } else if (root->data == x) {
        return root;
    }
    adrNode p = findNode(root->left, x);
    if (p != NULL) {
        return p;
    }
    return findNode(root->right, x);
}

int sumNode(adrNode root) {
    if (root == NULL) {
        return 0;
    }
    return root->data + sumNode(root->left) + sumNode(root->right);
}

int countLeaves(adrNode root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countLeaves(root->left) + countLeaves(root->right);
}

int heightTree(adrNode root) {
    if (root == NULL) {
        return 0;
    }
    int Left = heightTree(root->left);
    int Right = heightTree(root->right);
    return max(Left, Right) + 1;
}

void printPreOrder(adrNode root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printDecendant(adrNode root, infotype x) {
    adrNode p = findNode(root, x);
    if (p == NULL) {
        cout << "Empty" << endl;
    }
    printPreOrder(p->left);
    printPreOrder(p->right);
}
