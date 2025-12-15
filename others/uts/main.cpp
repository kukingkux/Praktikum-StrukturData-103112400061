#include <iostream>
#include <string>
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
        cout << "Quest ditambahkan: " << x << endl;
    }
}

string dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue empty.\n";
        return "";
    }

    string data = Q.info[Q.head];

    cout << "Dequeue: " << Q.info[Q.head] << endl;
    if (Q.head == Q.tail) {
        Q.head = Q.tail -1;
    } else
    if (Q.head == MAX - 1) {
        Q.head = 0;
    } else {
        Q.head++;
    }
    
    return data;
}

void printInfo(const Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Quest empty.\n";
    } else {
        cout << "Quest (Isi Queue): \n";
        int i = Q.head;

        while (i != Q.tail) {
            cout << i+1 << ". " << Q.info[i] << endl;
            i = (i + 1) % MAX;
        }

        cout << i+1 << ". " << Q.info[Q.tail] << endl;
    }
}

void printPreviousInfo(const Queue &Q) {
    int prev = Q.head-1;

    if (isEmptyQueue(Q)) {
        cout << "Quest sebelumnya: empty.\n";
        return;
    }

    if (isFullQueue(Q)) {
        cout << "Queue penuh.\n";
        return;
    }

    cout << "Quest sebelumnya: " << Q.info[prev] << endl;
}

int main() {
    Queue Q;
    CreateQueue(Q);
    int input;
    string data;

    do {
        cout << "\n === DarnSouls: Story Quests ===\n";
        cout << "1. Add Quest (Enqueue)\n";
        cout << "2. Finish Quest (Dequeue)\n";
        cout << "3. Print Quest (List)\n";
        cout << "0. Exit\n";
        cout << "Inputkan disini le: ";
        cin >> input;
        cout << endl;

        switch (input) {
            case 1:
                // printPreviousInfo(Q);
                cout << "Tambah Quest (Enqueue): ";
                cin.ignore();
                getline(cin, data);
                enqueue(Q, data);
                printInfo(Q);
                break;
            case 2:
                cout << "Selesaikan Quest (Dequeue): \n";
                cout << "Quest " << dequeue(Q) << "Selesai.";
                printInfo(Q);
                break;
            case 3:
                printInfo(Q);
                break;
            case 0:
                break;
            default:
                cout << "Input invalid.\n";
        }
    } while (input != 0);

    return 0;
}