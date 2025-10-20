#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris (tinggi setengah ketupat), misal 5: ";
    cin >> n;

    int totalCols = 2 * n - 1;
    int totalRows = 2 * n - 1;

    for (int r = 1; r <= totalRows; ++r) {
        // k adalah lebar "aktual" baris sekarang (1..n..1)
        int k = (r <= n) ? r : (2 * n - r);

        for (int c = 1; c <= totalCols; ++c) {
            int leftPos  = n - (k - 1); // posisi bintang kiri
            int rightPos = n + (k - 1); // posisi bintang kanan

            if (c == leftPos || c == rightPos) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
