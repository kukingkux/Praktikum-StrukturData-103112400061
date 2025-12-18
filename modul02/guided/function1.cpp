#include <iostream>

int hitungJumlah(int a, int b) {
    int total = a + b;
    return total;
}

void tampilkanHasil(int hasil) {
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;
}

int main()
{
    int angka1 = 15;
    int angka2 = 10;
    int hasilJumlah;

    hasilJumlah = hitungJumlah(angka1, angka2);
    tampilkanHasil(hasilJumlah);

    return 0;
}