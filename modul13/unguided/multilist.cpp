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

address findElm(listinduk L, infotypeinduk X) {

}

address_anak findElm(listanak Lanak, infotypeanak X) {
    
}

bool fFindElm(listinduk L, address P) {

}

bool fFindElmanak(listanak Lanak, address_anak P) {

}

address findBefore(listinduk L, address P) {

}

address_anak findBeforeAnak(listanak Lanak, infotypeinduk X, address_anak
P) {

}

void insertFirst(listinduk &L, address P) {

}

void insertAfter(listinduk &L, address P, address Prec) {

}

void insertLast(listinduk &L, address P) {

}

void insertFirstAnak(listanak &L, address_anak P) {

}

void insertAfterAnak(listanak &L, address_anak P, address_anak Prec) {

}

void insertLastAnak(listanak &L, address_anak P) {

}

void delFirst(listinduk &L, address &P) {

}

void delLast(listinduk &L, address &P) {

}

void delAfter(listinduk &L, address &P, address Prec) {

}

void delP (listinduk &L, infotypeinduk X) {

}

void delFirstAnak(listanak &L, address_anak &P) {

}

void delLastAnak(listanak &L, address_anak &P) {

}

void delAfterAnak(listanak &L, address_anak &P, address_anak Prec) {

}

void delPAnak (listanak &L, infotypeanak X) {

}

void printInfo(listinduk L) {

}

int nbList(listinduk L) {

}

void printInfoAnak(listanak Lanak) {

}

int nbListAnak(listanak Lanak) {

}

void delAll(listinduk &L) {
    
}

int main() {
    // This main function is just a placeholder.
    // The actual implementation would go here.
    return 0;
}