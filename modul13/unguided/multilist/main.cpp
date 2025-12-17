#include <iostream>
#include "multilist.h"
#include "multilist.cpp"
using namespace std;

int main() {
    listinduk L;
    CreateList(L);

    address Parent1 = alokasi(10);
    address Parent2 = alokasi(20);
    address Parent3 = alokasi(30);

    insertLast(L, Parent1);
    insertLast(L, Parent2);
    insertLast(L, Parent3);

    address_anak Child1 = alokasiAnak(100);
    address_anak Child2 = alokasiAnak(200);
    address_anak Child3 = alokasiAnak(300);

    insertLastAnak(Parent1->lanak, Child1);
    insertLastAnak(Parent1->lanak, Child2);
    insertLastAnak(Parent2->lanak, Child3);

    cout << "Isi list induk: ";
    printInfo(L);
    cout << "\nIsi list induk 1: ";
    printInfoAnak(Parent1->lanak);
    cout << "\nIsi list induk 2: ";
    printInfoAnak(Parent2->lanak);
    cout << "\nJumlah elemen dalam list induk: " << nbList(L) << endl;

    delAll(L);
    cout << "Setelah menghapus semua elemen, apakah list induk kosong? " << (ListEmpty(L) ? "Ya" : "Tidak") << endl;

    return 0;
}