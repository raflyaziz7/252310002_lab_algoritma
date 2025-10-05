#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14;
    float r, t, VolumeTabung;   // deklarasi semua variabel di sini

    // Menerima input manual
    cout << "=== Program Menghitung Volume Tabung ===\n";
    cout << "Masukkan jari-jari alas tabung (r): ";
    cin >> r;
    cout << "Masukkan tinggi Tabung (t): ";
    cin >> t;

    cout << "\n--- Langkah Perhitungan ---\n";
    cout << "Rumus Volume Tabung = PI * r * r * t\n";
    cout << "Substitusi : " << PI << " * " << r << " * " << r << " * " << t << endl;

    // Hitung Volume
    VolumeTabung = PI * r * r * t;
    cout << "Hasil Volume Tabung = " << VolumeTabung << " satuan volume\n";

    cout << "\n--- Hasil Akhir ---\n";
    cout << "Volume Tabung = " << VolumeTabung << endl;

    return 0;
}
