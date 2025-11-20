#include <iostream>
#include <string>
using namespace std;

struct Stack {
    string info[20];
    int top;
};

void CreateStack(Stack &S) {
    S.top = -1;
}

void push(Stack &S, string x) {
    if (S.top < 19) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack full.\n";
    }
}

string pop(Stack &S) {
    if (S.top >= 0) {
        string x = S.info[S.top];
        S.top--;
        return x;
    } else {
        cout << "Stack empty.\n";
        return " ";
    }
}

void printInfo(const Stack &S) {
    if (S.top == -1) {
        cout << "Stack empty.\n";
    } else {
        cout << "[TOP] ";
        for (int i = S.top; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Stack S;
    Stack meja;
    CreateStack(S);

    push(S, "K");
    push(S, "E");
    push(S, "I");
    push(S, "S");
    push(S, "H");
    push(S, "I");
    push(S, "N");
    cout << "Stack S:";
    printInfo(S);
    
    push(meja, pop(S));
    push(meja, pop(S));
    push(meja, pop(S));
    push(meja, pop(S));
    push(meja, pop(S));
    push(meja, pop(S));
    push(meja, pop(S));

    cout << "Stack meja:";
    printInfo(meja);
    cout << "Stack S:";
    printInfo(S);
}