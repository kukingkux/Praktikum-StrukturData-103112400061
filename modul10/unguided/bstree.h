#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED
#include <string>
using namespace std;

using infotype = int;
using address = struct Node*;
struct Node {
    infotype info;
    address left, right;
};

address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);
void printInOrder(address root);

#endif
