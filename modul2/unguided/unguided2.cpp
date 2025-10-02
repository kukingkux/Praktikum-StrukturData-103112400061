#include <iostream>
using namespace std;

void kuadratkan(int &keishin)
{
    keishin = keishin * keishin;
}

int main()
{
    int keishin;

    cout << "Nilai awal: ";
    cin >> keishin;

    kuadratkan(keishin);
    cout << "Nilai setelah dikuadratkan: " << keishin << endl;

    return 0;
}