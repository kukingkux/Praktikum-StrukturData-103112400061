#include <iostream>
#include <string>
using namespace std;

struct Node {
    int isbn;
    string judul;
    string penulis;
    Node* next;
};

Node* head = nullptr;

Node *createNode(int isbn, string judul, string penulis) {
    Node* newNode = new Node();
    newNode->isbn = isbn;
    newNode->judul = judul;
    newNode->penulis = penulis;
    newNode->next = nullptr;
    return newNode;
}

void insertBuku(int isbn, string judul, string penulis) {
    Node* newNode = createNode(isbn, judul, penulis);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteBuku(int isbn) {
    if (head == nullptr) {
        cout << "Tidak ada buku.";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->isbn == isbn) {
        head = temp->next;
        cout << "Buku " << temp->judul << " telah dihapus.\n";
        delete temp;
        return;
    }

    while (temp != nullptr && temp->isbn != isbn) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Buku " << temp->judul << " telah dihapus.\n";
}

void updateBuku(int isbn) {
    Node* temp = head;
    while (temp != nullptr && temp->isbn != isbn) {
        temp = temp->next;
    }

    int input;
    string judulBaru, penulisBaru;

    cout << "Pilih update: \n";
    cout << "1. Judul\n";
    cout << "2. Penulis\n";
    cout << "0. Batal\n";
    cin >> input;

    do {
        switch (input) {
            case 1:
                if (temp == nullptr) {
                    cout << "Buku dengan ISBN " << isbn << " tidak ditemukan!\n";
                } else {
                    cout << "Judul lama: " << temp->judul;
                    cout << "Judul baru: ";
                    cin >> judulBaru;
                    temp->judul = judulBaru;
                    cout << "Buku dengan ISBN " << isbn << " berhasil diupdate menjadi " << judulBaru << ".\n";
                }
                return;
                break;
            case 2:
                if (temp == nullptr) {
                    cout << "Buku dengan ISBN " << isbn << " tidak ditemukan!\n";
                } else {
                    cout << "Penulis lama: " << temp->penulis;
                    cout << "Penulis baru: ";
                    cin >> penulisBaru;
                    temp->penulis = penulisBaru;
                    cout << "Buku dengan ISBN " << isbn << " berhasil diupdate menjadi " << penulisBaru << ".\n";
                }
                return;
                break;
            case 0:
                return;
            default:
                cout << "pilihan invalid";
        }
    } while (input != 0);
}

void tampilkanList() {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }
    int i = 1;

    Node* temp = head;
    cout << "Daftar Buku:\n";
    while (temp != nullptr) { // Keishin
        cout << i << ". " << temp->judul << endl;
        cout << "   Penulis: " << temp->penulis << endl;
        cout << "   ISBN: " << temp->isbn << endl;
        cout << "-------------------------------\n";
        temp = temp->next;
        i++;
    }
}

int main()
{
    int input;
    int isbn;
    string judul, penulis;

    do {
        cout << "\n=== Perpustakaan Mpruyy ===\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Hapus Buku\n";
        cout << "3. Update Buku\n";
        cout << "4. List Buku\n";
        cout << "0. Exit\n";
        cout << "Pilih: ";

        cin >> input;
        switch (input) {
            case 1:
                cout << "Masukkan ISBN: ";
                cin >> isbn;
                cout << "Masukkan judul: ";
                cin >> judul;
                cout << "Masukkan penulis: ";
                cin >> penulis;
                insertBuku(isbn, judul, penulis);
                break;
            case 2:
                deleteBuku(isbn);
                break;
            case 3:
                updateBuku(isbn);
                break;
            case 4:
                tampilkanList();
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