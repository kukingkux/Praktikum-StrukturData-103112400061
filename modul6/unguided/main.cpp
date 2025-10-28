#include <iostream>
#include "Doublylist.h"
using namespace std;

int main() {
    List L;
    CreateList(L);
    infotype kendaraan;
    address deletedNode;

    int input;

    do {
        cout << "\n===== MENU DATA KENDARAAN KEPOLISIAN NASI HUY =====\n";
        cout << "1. Insert Belakang\n";
        cout << "2. Cari Kendaraan\n";
        cout << "3. Hapus Data\n";
        cout << "4. Tampilkan Data\n";
        cout << "0. Keluar\n";
        cout << "===================================\n";
        cout << "Pilih menu: ";
        cin >> input;

        switch (input) {
            case 1:
                while (true) {
                    cout << "masukkan nomor polisi (ketik 0 untuk kembali): ";
                    cin >> kendaraan.nopol;
                    if (kendaraan.nopol == "0") {
                        break;
                    }
                    cout << "masukkan warna kendaraan: ";
                    cin >> kendaraan.warna;
                    cout << "masukkan tahun kendaraan: ";
                    cin >> kendaraan.thnBuat;
                    insertLast(L, alokasi(kendaraan));
                    cout << endl;
                };
                break;
            case 2:
                cout << "Masukkan nomor polisi yang dicari: ";
                cin >> kendaraan.nopol;
                findElm(L, kendaraan);
                break;
            case 3:
                cout << "Masukkan Nomor Polisi Yang Akan Dihapus: ";
                cin >> kendaraan.nopol;
                deleteElm(L, deletedNode, kendaraan);
                if (deletedNode != nullptr)
                    dealokasi(deletedNode);
                    cout << "Data dengan nomor polisi " << kendaraan.nopol << " berhasil dihapus.\n";
                break;
            case 4:
                printInfo(L);
                break;
            case 0:
                cout << "👋 Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (input != 0);

    return 0;
}