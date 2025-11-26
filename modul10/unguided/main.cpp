#include <iostream>
#include "bstree.h"
#include "bstree.cpp"
using namespace std;

int main() {
    cout << "Hello Mok!" << endl;
    address root = NULL;
    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,6);
    insertNode(root,4);
    insertNode(root,5);
    insertNode(root,3);
    insertNode(root,6);
    insertNode(root,7);
    cout << "Pre Order  : ";
    printPreOrder(root);
    cout << endl;
    cout << "In Order   : ";
    printInOrder(root);
    cout << endl;
    cout << "Post Order : ";
    printPostOrder(root);
    cout << endl;
    cout<<"\n"; 
    cout<<"Jumlah Node  : " << hitungJumlahNode(root) << endl;
    cout<<"Kedalaman    : " << hitungKedalaman(root,0) << endl;
    cout<<"Total        : " << hitungTotalInfo(root) << endl;
    return 0;
}