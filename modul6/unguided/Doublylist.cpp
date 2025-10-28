#include <iostream>
#include "Doublylist.h"
using namespace std;

void CreateList(List &L) {
    L.First = nullptr;
    L.Last = nullptr;
}

address alokasi(const infotype &x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    P->prev = nullptr;
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void printInfo(const List &L) {
    address P = L.First;
    cout << "DATA LIST 1: \n";
    while (P != nullptr) {
        cout << "no polisi  : " << P->info.nopol << endl;
        cout << "warna      : " << P->info.warna << endl;
        cout << "tahun      : " << P->info.thnBuat << endl;
        cout << "----------------------\n";
        P = P->next;
    }
}

void insertLast(List &L, address P) {
    string cekNopol = P->info.nopol;
    address current = L.First;
    
    while (current != nullptr) {
        if (current->info.nopol == cekNopol) {
            cout << "nomor polisi sudah terdaftar.\n";
            dealokasi(P);
            return;
        }
        current = current->next;
    }

    if (L.First == nullptr) {
        L.First = P;
        L.Last = P;
    } else {
        L.Last->next = P;
        P->prev = L.Last;
        L.Last = P;
    }
}

void findElm(List L, infotype x) {
    address P = L.First;
    while (P != nullptr && x.nopol != P->info.nopol) {
        P = P->next;
    }
    if (P != nullptr) {
        cout << "Nomor Polisi   : " << P->info.nopol << endl;
        cout << "Warna          : " << P->info.warna << endl;
        cout << "Tahun          : " << P->info.thnBuat << endl;
    } else {
        cout << "Kendaraan dengan nomor polisi " << x.nopol << " tidak ditemukan.\n";
    }
}

void deleteFirst(List &L, address &P) {
    if (L.First == nullptr) {
        P = nullptr;
        return;
    }

    P = L.First;
    if (L.First == L.Last) {
        L.First = nullptr;
        L.Last = nullptr;
    } else {
        L.First = L.First->next;
        L.First->prev = nullptr;
    }
    P->next = nullptr;
}

void deleteLast(List &L, address &P) {
    if (L.Last == nullptr) {
        P = nullptr;
        return;
    }

    P = L.Last;
    if (L.First == L.Last) {
        L.First = nullptr;
        L.Last = nullptr;
    } else {
        L.Last = L.Last->prev;
        L.Last->next = nullptr;
    }
    P->prev = nullptr;
}

void deleteAfter(List &L, address &P, address Prec) {
    if (Prec == nullptr || Prec->next == nullptr) {
        P = nullptr;
        return;
    }
    P = Prec->next;

    Prec->next = P->next;

    if (P->next == nullptr) {
        L.Last = Prec;
    } else {
        P->next->prev = Prec;
    }
    P->next = nullptr;
    P->prev = nullptr;
}

void deleteElm(List &L, address &P, infotype x) {
    address temp = L.First;
    while (temp != nullptr && temp->info.nopol != x.nopol) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Kendaraan dengan nomor polisi " << x.nopol << " tidak ditemukan.\n";
        P = nullptr;
        return;
    }

    if (temp == L.First) {
        deleteFirst(L, P);
    } else if (temp == L.Last) {
        deleteLast(L, P);
    } else {
        deleteAfter(L, temp->prev, P);
    }
}