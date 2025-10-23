#include <iostream>
using namespace std;

int main() {
	int bil;
	char ulang;
	
	do {
		cout << "Masukan bilangan = ";
		cin >> bil;
		
		cout << "Nilai "  << bil << " % 2 adalah " << bil % 2 << endl;
		 
		cout << "Ingin hitung lagi [Y/T] ? = ";
		cin >> ulang;
		
		cout <<
"----------------------------" << endl;
	} while (ulang == 'Y' || ulang == 'Y');
	
	return 0; 
}
