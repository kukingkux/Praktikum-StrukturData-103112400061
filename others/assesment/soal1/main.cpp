#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* head = nullptr;

Node* createNode(string data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertFront(string data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    cout << "Data inserted di depan: " << data << endl;
}

void insertBehind(string data) {
    Node* newNode = createNode(data);
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

void deleteNode(string data) {
    if (head == nullptr) {
        cout << "List empty.\n";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == data) {
        head = temp->next;
        delete temp;
        cout << "Data " << data << " deleted successfully\n";
        return;
    }

    while (temp != nullptr && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "No data.\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Data " << data << " deleted successfully\n";
}

void printInfo() {
    if (head == nullptr) {
        cout << "No data.\n";
        return;
    }

    Node* temp = head;
    cout << "Data pesanan:\n";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}



int main() {
    int input;
    string data;

    do {
        cout << "\n === Warung Nasi Huy cabang Sumampir ===\n";
        cout << "1. Insert Front\n";
        cout << "2. Insert Behind\n";
        cout << "3. Delete Data\n";
        cout << "4. Print List\n";
        cout << "0. Exit\n";
        cout << "Inputkan disini le: ";
        cin >> input;

        switch (input) {
            case 1:
                cout << "Insert data (depan): ";
                cin >> data;
                insertFront(data);
                printInfo();
                break;
            case 2:
                cout << "Insert data (balakang): ";
                cin >> data;
                insertBehind(data);
                printInfo();
                break;
            case 3:
                cout << "Delete data: ";
                cin >> data;
                deleteNode(data);
                printInfo();
                break;
            case 4:
                printInfo();
                break;
            default:
                cout << "Input invalid.\n";
        }
    } while (input != 0);
}