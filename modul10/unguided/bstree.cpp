#include <iostream>
#include "bstree.h"
using namespace std;

address alokasi(infotype x) {
    address baru = new Node;
    baru->info = x;
    baru->left = baru->right = NULL;
    return baru;
}

void insertNode(address &root, infotype x) {
    if (root == NULL)
        alokasi(x);

    if (x < root->info)
        insertNode(root->left, x);
    else
        insertNode(root->right, x);
}