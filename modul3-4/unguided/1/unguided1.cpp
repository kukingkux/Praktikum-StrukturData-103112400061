#include <iostream>
#include "service.h"
using namespace std;

Service* head = nullptr;

Service *createService(string nama, string pesanan) {
    Service* newService = new Service();
    newService->nama = nama;
    newService->pesanan = pesanan;
    newService->next = nullptr;
    return newService;
}

void insertService(string nama, string pesanan) {
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

void deleteService(string nama) {
    if (head == nullptr) {
        cout << "List kosong!\n";
        return;
    }

    Service* temp = head;
    Service* prev = nullptr;

    if (temp != nullptr && temp->nama == nama) {
        head = temp->next;
        delete temp;
        cout << "Antrian dengan nama " << nama << " berhasil dihapus.\n";
        return;
    }

    while (temp != nullptr && temp->nama != nama) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Antrian dengan nama " << nama << " tidak ditemukan.\n";
        return;
    }
}

void showServices() {
    if (head == nullptr) {
        cout << "Antrian kosong.\n";
        return;
    }
    int i = 1;

    Service* temp = head;
    cout << "Daftar Antrian:\n";
    while (temp != nullptr) {
        cout << i << temp->nama << endl;
        cout << " Pesanan: " << temp->pesanan << endl;
        temp = temp->next;
        i++;
    }
}

