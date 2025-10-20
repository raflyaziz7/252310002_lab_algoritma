#include <iostream>
using namespace std;

int main()
{
	
	int n;
	char ulangi;
	
	do {
		cout << "Masukan bilanggan : ";
		cin >> n;
		
		int faktorial = 1;
		int i = 1;
		while (i <= n) {
			faktorial *= i;
			i++;
		}
		
		cout << "Hasil "<< n << "i = "
		<< faktorial << endl;
		
		cout <<  "Ulangi lagi? (y/n) : ";
		cin  >> ulangi;
		
	} while (ulangi == 'y' || ulangi == 'y');
	
	return 0;
}
