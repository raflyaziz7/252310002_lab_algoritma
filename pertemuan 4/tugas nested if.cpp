#include <iostream>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;
    string hadiah;

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

    if (rata >= 70) {
        if (rata >= 80) {
            if (rata >= 90) {
                hadiah = "Rp. 5.000.000";
            } else {
                hadiah = "Rp. 2.500.000";
            }
        } else {
            hadiah = "Rp. 1.000.000";
        }
    } else {
        hadiah = "Tidak mendapatkan hadiah";
    }

    cout << "Hadiah yang didapat adalah uang sebesar " << hadiah << endl;

    return 0;
}
