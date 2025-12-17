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
    address P = L.first;
    while (P != Nil && P->info != X) {
        P = P->next;
    }
    return P;
}

address_anak findElm(listanak Lanak, infotypeanak X) {
    address_anak P = Lanak.first;
    while (P != Nil && P->info != X) {
        P = P->next;
    }
    return P;
}

bool fFindElm(listinduk L, address P) {
    address curr = L.first;
    while (curr != Nil) {
        if (curr == P) {
            return true;
        } else {
            curr = curr->next;
        }
    }
    return false;
}

bool fFindElmanak(listanak Lanak, address_anak P) {
    address_anak curr = Lanak.first;
    while (curr != Nil) {
        if (curr == P) {
            return true;
        } else {
            curr = curr->next;
        }
    }
    return false;
}

address findBefore(listinduk L, address P) {
    address curr = L.first;
    address before = Nil;
    while (curr != Nil && curr != P) {
        before = curr;
        curr = curr->next;
    }
    return before;
}

address_anak findBeforeAnak(listanak Lanak, infotypeinduk X, address_anak P) {
    address_anak curr = Lanak.first;
    address_anak before = Nil;
    while (curr != Nil && curr != P) {
        before = curr;
        curr = curr->next;
    }
    return before;
}

void insertFirst(listinduk &L, address P) {
    if (listEmpty(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertAfter(listinduk &L, address P, address Prec) {
    if (Prec != Nil) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != Nil) {
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
    }
}

void insertLast(listinduk &L, address P) {
    if (listEmpty(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void insertFirstAnak(listanak &L, address_anak P) {
    if (listEmptyAnak(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertAfterAnak(listanak &L, address_anak P, address_anak Prec) {
    if (Prec != Nil) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != Nil) {
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
    }
}

void insertLastAnak(listanak &L, address_anak P) {
    if (listEmptyAnak(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void delFirst(listinduk &L, address &P) {
    if (!listEmpty(L)) {
        P = L.first;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.first = L.first->next;
            L.first->prev = Nil;
            P->next = Nil;
        }
    }
}

void delLast(listinduk &L, address &P) {
    if (!listEmpty(L)) {
        P = L.last;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.last = L.last->prev;
            L.last->next = Nil;
            P->prev = Nil;
        }
    }
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