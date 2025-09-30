#include <iostream>
using namespace std;

string konversiAngkaHuruf(int angka)
{
    string huruf;
    switch (angka)
    {
        case 1: huruf = "satu"; break;
        case 2: huruf = "dua"; break;
        case 3: huruf = "tiga"; break; // Keishin
        case 4: huruf = "empat"; break;
        case 5: huruf = "lima"; break;
        case 6: huruf = "enam"; break;
        case 7: huruf = "tujuh"; break;
        case 8: huruf = "delapan"; break;
        case 9: huruf = "sembilan"; break;
        case 10: huruf = "sepuluh"; break;
        case 11: huruf = "sebelas"; break;
        case 100: huruf = "seratus"; break;
        default: huruf = "Hanya angka 1-100 gng."; break;
    }
    return huruf;
}

int main()
{
    int input, satuan, puluhan;
    cout << "Masukkan angka: ";
    cin >> input; // 103112400061

    puluhan = input / 10;
    satuan = input % 10;

    if (input <= 11)
    {
        cout << konversiAngkaHuruf(input);
    }

    if (input > 11 && input < 20)
    {
        cout << konversiAngkaHuruf(satuan) << " belas";
    }

    if (input >= 20 && input < 100) // Keishin
    {
        if (satuan == 0)
            cout << konversiAngkaHuruf(puluhan) << " puluh";
        else
            cout << konversiAngkaHuruf(puluhan) << " puluh " << konversiAngkaHuruf(satuan);
    }

    if (input == 100)
    {
        cout << konversiAngkaHuruf(input);
    }

    return 0;
}

