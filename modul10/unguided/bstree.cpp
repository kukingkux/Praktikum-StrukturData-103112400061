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
    if (root == NULL) {
        root = alokasi(x);
        return;
    }

    if (x < root->info)
        insertNode(root->left, x);
    else if (x > root->info)
        insertNode(root->right, x);
}

address findNode(infotype x, address root) {
    if (root == NULL || root->info == x)
        return root;

    if (x < root->info)
        return findNode(x, root->left);

    return findNode(x, root->right);
}

int hitungJumlahNode(address root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + hitungJumlahNode(root->right) + hitungJumlahNode(root->left);
}

int hitungTotalInfo(address root) {
    if (root == NULL) {
        return 0;
    }

    return root->info + hitungTotalInfo(root->right) + hitungTotalInfo(root->left);
}

int hitungKedalaman(address root, int start) {
    if (root == NULL) {
        return start;
    }
    
    int left = hitungKedalaman(root->left, start + 1);
    int right = hitungKedalaman(root->right, start + 1);

    if (left > right) {
        return left;
    }
    return right;
}

void printPreOrder(address root) {
    if (root != NULL) {
        cout << root->info << " - ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

void printInOrder(address root) {
    if (root != NULL) {
        printInOrder(root->left);
        cout << root->info << " - ";
        printInOrder(root->right);
    }
}

void printPostOrder(address root) {
    if (root != NULL) {
        printPostOrder(root->left);
        printPostOrder(root->right);
        cout << root->info << " - ";
    }
}