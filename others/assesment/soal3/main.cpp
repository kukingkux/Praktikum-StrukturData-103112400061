#include <iostream>
using namespace std;

const int MAX = 10;

struct Queue {
    string info[MAX];
    int head, tail;
};

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(const Queue &Q) {
    return (Q.head == -1 && Q.tail == -1);
}

bool isFullQueue(const Queue &Q) {
    return (Q.tail + 1) % MAX == Q.head;
}

void enqueue(Queue &Q, string x) {
    if (isFullQueue(Q)) {
        cout << "Queue full.\n";
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = Q.tail = 0;
        } else {
            if (Q.tail == MAX - 1) {
                Q.tail = 0;
            } else {
                Q.tail++;
            }
        }
        Q.info[Q.tail] = x;
        cout << "Antrian masuk: " << x << endl;
    }
}

string dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue empty.\n";
    } else {
        cout << "Dequeue: " << Q.info[Q.head] << endl;
        if (Q.head == Q.tail) {
            Q.head = Q.tail -1;
        } else
        if (Q.head == MAX - 1) {
            Q.head = 0;
        } else {
            Q.head++;
        }
    }
}

void printInfo(const Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue empty.\n";
    } else {
        cout << "Queue: ";
        int i = Q.head;

        while (i != Q.tail) {
            cout << Q.info[i] << " -> ";
            i = (i + 1) % MAX;
        }

        cout << Q.info[Q.tail] << " \n";
    }
}

int main() {
    Queue Q;
    CreateQueue(Q);
    int input;
    string data;

    do {
        cout << "\n === Antrean ===\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Print List\n";
        cout << "0. Exit\n";
        cout << "Inputkan disini le: ";
        cin >> input;

        switch (input) {
            case 1:
                cout << "Tambah antrean: ";
                cin >> data;
                enqueue(Q, data);
                printInfo(Q);
                break;
            case 2:
                cout << "Dequeue antrean: ";
                dequeue(Q);
                printInfo(Q);
                break;
            case 3:
                printInfo(Q);
                break;
            default:
                cout << "Input invalid.\n";
        }
    } while (input != 0);
}