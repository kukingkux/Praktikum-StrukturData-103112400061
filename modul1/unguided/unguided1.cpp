#include <iostream>
using namespace std;

int main()
{
    double angka1, angka2;
    double tambah, kurang, kali, bagi; // Keishin

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    tambah = angka1 + angka2;
    kurang = angka1 - angka2;
    kali = angka1 * angka2;
    bagi = angka1 / angka2;

    cout << "Hasil tambah: " << tambah << endl;
    cout << "Hasil kurang: " << kurang << endl; // 103112400061
    cout << "Hasil kali: " << kali << endl;
    cout << "Hasil bagi: " << bagi << endl;

    return 0;
}