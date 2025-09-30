#include <iostream>
using namespace std;

int main() // 103112400061
{
    int input;
    cout << "Input: ";
    cin >> input;

    for (int i = input + 1; i >= 1; i--)
    {
        for (int k = 0; k < input + 1 - i; k++) // Keishin
        {
            cout << "  ";
        }
        for (int j = i-1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1; j < i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}