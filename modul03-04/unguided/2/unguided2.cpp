#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr; // pointer awal linked list

Node *createNode(int data) { // membuat node baru
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertNode() { // tambah data baru di belakang list (tail)

    for (int i = 1; i <= 3; i++) {
        Node* newNode = createNode(i);
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
    
    cout << "List telah diisi.\n";
}

void reverseNode() { // reverse list 
    if (head == nullptr) {
        cout << "List kosong!\n";
        return;
    }

    Node* prev = nullptr;
    Node* temp = head;
    Node* next = nullptr;
// 103112400061
    while (temp != nullptr) {
        // store next node
        next = temp->next;
        // reverse pointer dari next menjadi prev
        temp->next = prev;
        // pindah pointer ke temp; temp ke next
        prev = temp;
        temp = next;
    }

    // update head setelah loop selesai
    head = prev;
    cout << "List telah di-reverse.\n";
}

void showNodes() { // menampilkan list
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    Node* temp = head;
    cout << "Isi List:\n";
    while (temp != nullptr) { // Keishin
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() // main function
{
        cout << "\n=== Unguided 2 ===\n";
        cout << "1. Tambah Data (isi list)\n";
        insertNode();
        cout << "2. Tampilkan List\n";
        showNodes();
        cout << endl;
        cout << "3. Reverse List\n";
        reverseNode();
        cout << "4. Tampilkan List\n";
        showNodes();
        

    return 0;
}