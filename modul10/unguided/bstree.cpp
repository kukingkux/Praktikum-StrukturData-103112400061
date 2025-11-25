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

address findNode(infotype x, address root) {
    if (root == NULL || root->info == x)
        return root;

    if (x < root->info)
        return findNode(x, root->left);

    return findNode(x, root->right);
}

void printInOrder(address root) {
    if (root != NULL) {
        printInOrder(root->left);
        printInOrder(root->right);
        cout << root->info << " ";
    }
}