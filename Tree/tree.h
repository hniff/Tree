#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

using namespace std;

typedef int infotype;

struct node {
    infotype data;
    node *left;
    node *right;
};

typedef node *adrNode;

adrNode newNode(infotype x);
adrNode insertNode(adrNode root, adrNode Node);
adrNode findNode(adrNode root, infotype x);
int sumNode(adrNode root);
int countLeaves(adrNode root);
int heightTree(adrNode root);
void printPreOrder(adrNode root);
void printDecendant(adrNode root, infotype x);

#endif // TREE_H_INCLUDED
