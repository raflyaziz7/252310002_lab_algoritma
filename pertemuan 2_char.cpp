#include <iostream>
using namespace std;

int main()
{
	char y[30]; char z[35]; char x[40];
	
	cout << "Masukan NPM Anda: ";
	cin >> x;
	cout << "Masuka Nama Anda: ";
	cin >> y;
	cout << "Masukan Alamat Anda: ";
	cin >> z;
	
	cout << "NPM Anda adalah: " << x;
	cout << "\nAlamat Anda adalah: " << y;
	cout << "Masukan Nama anda: " << z;
	
	return 0;
}
