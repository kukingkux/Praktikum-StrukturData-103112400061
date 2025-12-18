#include <iostream>
#include "service.h"
using namespace std;

Service* head = nullptr; // pointer awal linked list

Service *createService(string nama, string pesanan) { // membuat node baru
    Service* newService = new Service();
    newService->nama = nama;
    newService->pesanan = pesanan;
    newService->next = nullptr;
    return newService;
}

void insertService(string nama, string pesanan) { // tambah antrian baru di belakang list (tail)
    Service* newService = createService(nama, pesanan);
    if (head == nullptr) {
        head = newService;
    } else {
        Service* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newService;
    }
    cout << "Antrian dengan nama " << nama << " berhasil ditambahkan.\n";
}

void serveService() { // layani antrian pertama dengan delete head
    if (head == nullptr) {
        cout << "List kosong!\n";
        return;
    }

    Service* temp = head;
    Service* prev = nullptr;
// 103112400061
    if (temp != nullptr) {
        head = temp->next;
        cout << "Antrian dengan nama " << temp->nama << " telah dilayani.\n";
        delete temp;
        return;
    }
}

void showServices() { // menampilkan semua antrian
    if (head == nullptr) {
        cout << "Antrian kosong.\n";
        return;
    }
    int i = 1;

    Service* temp = head;
    cout << "Daftar Antrian:\n";
    while (temp != nullptr) { // Keishin
        cout << i << ". " << temp->nama << endl;
        cout << "   Pesanan: " << temp->pesanan << endl;
        cout << "-------------------------------\n";
        temp = temp->next;
        i++;
    }
}

