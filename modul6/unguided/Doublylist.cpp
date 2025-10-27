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