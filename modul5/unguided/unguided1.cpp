#include <iostream>
using namespace std;

struct Service{
    string nama;
    string pesanan;
    Service *next;
};

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

void findCustomer(const string &C) {
    
    if (head == nullptr) {
        cout << "Antrian kosong.\n";
        return;
    }

    Service* temp = head;
    int i = 1;

    while (temp != nullptr) {
        if (temp->nama == C) {
            cout << "\nCustomer ditemukan pada antrian ke-" << i << endl;
            cout << "Nama: " << temp->nama << endl;
            cout << "Pesanan: " << temp->pesanan << endl;
            return;
        }
        temp = temp->next;
        i++;
    }

    cout << "Customer dengan nama \"" << C << "\" tidak ditemukan.\n";
}

int main() // main function
{
    int input;
    string nama, pesanan;

    do {
        cout << "\n=== KASIR CAFE MPRUYY ===\n";
        cout << "1. Tambah Antrian\n";
        cout << "2. Layani Antrian\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Cari Customer\n";
        cout << "0. Exit\n";
        cout << "Pilih: ";

        cin >> input;
        switch (input) {
            case 1:
                cout << "Masukkan nama: ";
                cin >> nama;
                cout << "Masukkan pesanan: ";
                cin >> pesanan;
                insertService(nama, pesanan); 
                break;
            case 2:
                serveService();
                break;
            case 3:
                showServices();
                break;
            case 4:
                cout << "Masukkan nama: ";
                cin >> nama;
                findCustomer(nama);
                break;
            case 0:
                cout << "Exiting program. . .\n";
                break;
            default:
                cout << "Pilihan invalid.";
        }
    } while (input != 0);

    return 0;
}
