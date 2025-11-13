#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED
#include <string>
using namespace std;

const int MAX = 5;
using infotype = int;

struct Queue {
    infotype info[5];
    int head, tail;
};

void CreateQueue(Queue &Q);
bool isEmptyQueue(const Queue &Q);
bool isFullQueue(const Queue &Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(const Queue &Q);

#endif