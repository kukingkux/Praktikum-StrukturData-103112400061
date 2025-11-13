#include <iostream>
#include "queue.h"
using namespace std;

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

// unguided 1, 2 - alternatif 1 dan 2
// void enqueue(Queue &Q, infotype x) {
//     if (isFullQueue(Q)) {
//         cout << "Queue penuh! Tidak bisa menambah data." << endl;
//     } else {
//         if (isEmptyQueue(Q)) {
//             Q.head = Q.tail = 0;
//         } else {
//             Q.tail++;
//         }
//         Q.info[Q.tail] = x;
//         cout << "Enqueue: " << x << endl;
//     }
// }

// unguided 3 - alternatif 3 circular queue
void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh! Tidak bisa menambah data." << endl;
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
        cout << "Enqueue: " << x << endl;
    }
}

// unguided 1 - alternatif 1
// int dequeue(Queue &Q) {
//     if (isEmptyQueue(Q)) {
//         cout << "Queue kosong! Tidak ada data yang dihapus." << endl;
//     } else {
//         cout << "Dequeue: " << Q.info[Q.head] << endl;
//         if (Q.head == Q.tail) {
//             Q.head = Q.tail = -1;
//         } else {
//             for (int i = Q.head; i < Q.tail; i++) {
//                 Q.info[i] = Q.info[i+1];
//             }
//             Q.tail--;
//         }
//     }
// }

// unguided 2 - alternatif 2
// int dequeue(Queue &Q) {
//     if (isEmptyQueue(Q)) {
//         cout << "Queue kosong! Tidak ada data yang dihapus." << endl;
//     } else {
//         cout << "Dequeue: " << Q.info[Q.head] << endl;
//         if (Q.head == Q.tail) {
//             Q.head = Q.tail = -1;
//         } else {
//             Q.info[Q.head] = 0;
//             Q.head++;
//         }
//     }
// }

// unguided 3 - alternatif 3
int dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong! Tidak ada data yang dihapus." << endl;
    } else {
        cout << "Dequeue: " << Q.info[Q.head] << endl;
        if (Q.head == Q.tail) {
            Q.head = Q.tail = -1;
        } else {
            if (Q.head == MAX - 1) {
                Q.head = 0;
            } else {
                Q.head++;
            }
        }
    }
}

void printInfo(const Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Queue : ";
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
        cout << endl;
    }
}