#include <iostream>
#include "stack.h"
using namespace std;

// -1 adalah tanda bahwa stack kosong

void CreateStack(Stack &S) {
    S.top = -1;
}

void push(Stack &S, infotype x) {
    if (S.top < 19) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack penuh.\n";
    }
}

void pushAscending(Stack &S, infotype x) {
    int i = S.top;
    push(S, x);
    while (i >= 0 && S.info[i] > x) {
        int temp = S.info[i]; // Keishin Naufa A
        if (i + 1 <= S.top) {
            S.info[i + 1] = temp;
        }
        S.info[i] = x;
        i--;
    }
}

void getInputStream(Stack &S) {
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        infotype x = c - '0';
        push(S, x); // 103112400061
    }
}

infotype pop (Stack &S) {
    if (S.top >= 0) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    } else {
        cout << "Stack kosong.\n";
        return -1;
    }
}

void printInfo(const Stack &S) {
    if (S.top == -1) {
        cout << "Stack kosong.\n";
    } else {
        cout << "[TOP] ";
        for (int i = S.top; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

void balikStack(Stack &S) {
    if (S.top <= 0) {
        return;
    }

    infotype temp;
    int start = 0;
    int end = S.top;

    while (start < end) {
        temp = S.info[start];
        S.info[start] = S.info[end];
        S.info[end] = temp;
        start++;
        end --;
    }
}