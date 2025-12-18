#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    Stack S;
    CreateStack(S);

    // unguided 1
    // push(S, 3);
    // push(S, 4);
    // push(S, 8);
    // pop(S);
    // push(S, 2);
    // push(S, 3);
    // pop(S);
    // push(S, 9);

    // unguided 2
    // pushAscending(S, 3);
    // pushAscending(S, 4);
    // pushAscending(S, 8);
    // pushAscending(S, 2);
    // pushAscending(S, 3);
    // pushAscending(S, 9);

    // unguided 3
    getInputStream(S);
    
    printInfo(S);
    cout << "Balik stack" << endl;
    balikStack(S);
    printInfo(S);
    return 0;
}