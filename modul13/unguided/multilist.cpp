#include <iostream>
#include "multilist.h"
using namespace std;

bool listEmpty(listinduk L) {
    return (L.first == Nil && L.last == Nil);
}

bool listEmptyAnak(listanak L) {
    return (L.first == Nil && L.last == Nil);
}

void CreateList(listinduk &L) {
    L.first = Nil;
    L.last = Nil;
}

void CreateListAnak(listanak &L) {
    L.first = Nil;
    L.last = Nil;
}

address alokasi(infotypeinduk P) {
    address newNode = new elemen_list_induk;
    newNode->info = P;
    newNode->next = Nil;
    newNode->prev = Nil;
    CreateListAnak(newNode->lanak);
    return newNode;
}

address_anak alokasiAnak(infotypeanak P) {
    address_anak newNode = new elemen_list_anak;
    newNode->info = P;
    newNode->next = Nil;
    newNode->prev = Nil;
    return newNode;
}

void dealokasi(address &P) {
    delete P;
}

void dealokasiAnak(address_anak &P) {
    delete P;
}

address findElm

int main() {
    // This main function is just a placeholder.
    // The actual implementation would go here.
    return 0;
}