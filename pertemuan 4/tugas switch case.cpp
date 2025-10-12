#include <iostream>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;
    string hadiah;
    int kategori;

    cout << "Program Hitung Nilai Rata-Rata" << endl;
    cout << "Nama Siswa : ";
    cin >> nama;
    cout << "Nilai Pertandingan I : ";
    cin >> n1;
    cout << "Nilai Pertandingan II : ";
    cin >> n2;
    cout << "Nilai Pertandingan III : ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya" << endl;

    if (rata >= 90) kategori = 1;
    else if (rata >= 80) kategori = 2;
    else if (rata >= 70) kategori = 3;
    else kategori = 4;

    switch (kategori) {
        case 1:
            hadiah = "Rp. 5.000.000";
            break;
        case 2:
            hadiah = "Rp. 2.500.000";
            break;
        case 3:
            hadiah = "Rp. 1.000.000";
            break;
        default:
            hadiah = "Tidak mendapatkan hadiah";
            break;
    }

    cout << "Hadiah yang didapat adalah uang sebesar " << hadiah << endl;

    return 0;
}
