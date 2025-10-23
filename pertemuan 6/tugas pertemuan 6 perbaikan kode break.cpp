#include <iostream>
using namespace std;

int main() {
	int A = 5, B = 3, C = 3;
	
	cout << "Bil-A\t|\tBil-B\t|\tBil-C\n";
	cout <<
	"===================================\n";
	
	for (int i = 0; i < 6; i++) {
		cout << A << "\t|\t" << B <<
		"\t|\t" << C << endl;
		
		// Rumus Kenaikan
		A = A + B;   // Bil-A berikutnya
		B = B + 3;  // Bil-B bertambah 3 setiap langkah
	    C = C + 2; // Bil-C bertambah 2 setiap langkah	
	}
	
	cout <<
	"=============================\n";
	return 0;
}
