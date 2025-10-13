#include <iostream>
#include "service.h"
using namespace std;

int main() // main program, menu kasir
{
    int input;
    string nama, pesanan;

    do {
        cout << "\n=== KASIR CAFE MPRUYY ===\n";
        cout << "1. Tambah Antrian\n";
        cout << "2. Layani Antrian\n";
        cout << "3. Tampilkan Antrian\n";
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
            case 0:
                cout << "Exiting program. . .\n";
                break;
            default:
                cout << "Pilihan invalid.";
        }
    } while (input != 0);

    return 0;
}