#include <iostream>
using namespace std;

int main()
{
	string nama;
	float nilai1, nilai2, nilai3, rata;
	string hadiah;
	
	cout << "PROGRAM HITUNG NILAI RATA RATA\n";
	cout << "Nama Siswa :";
	cin >> nama;
	cout << "Nilai Pertandingan I : ";
	cin >> nilai1;
	cout << "Nilai Pertandingan II : ";
	cin >> nilai2;
	cout <<"Nilai Pertandingan III : ";
	cin >> nilai3;
	
	rata = (nilai1 + nilai2 + nilai3) / 3;
	
	cout << "Siswa Yang Bernama " << nama << endl;
	cout << "Memperoleh Nilai rata-rata Yang diikutinya" << endl;
	
	
	if (rata >= 90) {
		hadiah = "Rp. 5.000.000";
	} else if (rata >= 80) {
		hadiah = "Rp. 2.500.000";
	} else {
		hadiah = "tidak mendapatkan hadiah";
	}
	
	cout << "Hadiah yang didapat adalah unag sebesar " << hadiah << endl;
	
	return 0;
}
