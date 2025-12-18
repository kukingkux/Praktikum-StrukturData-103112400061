#include <iostream>
using namespace std;

void printMatriks(int matriks[3][3]) // biar ora kepanjangan
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriksKeishin[3][3]; // matriks baru gng

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            matriksKeishin[i][j] = matriks[j][i]; // masukin value ke matriks baru pamke logika transpose
        }
    }

    cout << "Matriks Awal:" << endl;
    printMatriks(matriks);

    cout << "Matriks Hasil Transpose:" << endl;
    printMatriks(matriksKeishin);

    return 0;
}