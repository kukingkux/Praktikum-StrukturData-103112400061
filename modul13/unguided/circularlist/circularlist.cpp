#include <iostream>
#include "circularlist.h"
using namespace std;

void CreateList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi (address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        P->next = L.First;
    } else {
        address last = L.First;
        while (last->next != L.First) {
            last = last->next;
        }
        P->next = L.First;
        L.First = P;
        last->next = L.First;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void insertLast(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        P->next = L.First;
    } else {
        address last = L.First;
        while (last->next != L.First) {
            last = last->next;
        }
        last->next = P;
        P->next = L.First;
    }
}

void deleteFirst(List &L, address &P) {
    if (L.First != Nil) {
        P = L.First;
        if (L.First->next == L.First) {
            L.First = Nil;
        } else {
            address last = L.First;
            while (last->next != L.First) {
                last = last->next;
            }
            L.First = L.First->next;
            last->next = L.First;
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != Nil && Prec->next != L.First) {
        P = Prec->next;
        Prec->next = P->next;
    }
}

void deleteLast(List &L, address &P) {
    if (L.First != Nil) {
        address last = L.First;
        address beforeLast = Nil;
        while (last->next != L.First) {
            beforeLast = last;
            last = last->next;
        }
        P = last;
        if (beforeLast == Nil) {
            L.First = Nil;
        } else {
            beforeLast->next = L.First;
        }
    }
}

address findElm(List L, infotype x) {
    if (L.First == Nil) {
        return Nil;
    } else {
        address P = L.First;
        do {
            if (P->info.Nim == x.Nim) {
                return P;
            } else {
                P = P->next;
            }
        } while (P != L.First);
        return Nil;
    }
}

void printInfo(List L) {
    int i = 1;
    if (L.First == Nil) {
        cout << "List kosong." << endl;
    } else {
        address P = L.First;
        cout << "No\t| Nama \t| Nim \t| Jenis Kelamin | IPK" << endl;
        cout << "-----------------------------------------------" << endl;
        do {
            cout << i << "\t| " << P->info.Nama << "\t| " << P->info.Nim << "\t| " << P->info.Jenis_kelamin << "\t\t| " << P->info.IPK << endl;
            P = P->next;
            i++;
        } while (P != L.First);
    }
}

address CreateData(string nama, string nim, char jenis_kelamin, float ipk) 
{ 
    /** 
    * PR : mengalokasikan sebuah elemen list dengan info dengan info sesuai input 
    * FS : address P menunjuk elemen dengan info sesuai input 
    */ 
    infotype x; 
    address P; 
    x.Nama = nama; 
    x.Nim = nim; 
    x.Jenis_kelamin = jenis_kelamin; 
    x.IPK = ipk; 
    P = alokasi(x); 
    return P; 
}