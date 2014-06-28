#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int m, n;			
	char lagi;		
		
	do {				
		cout << "Masukkan Besar Nilai Belanja : Rp "; cin >> n;
		cout << endl;
		
		if (n % 100 > 50) {
			m = n % 100;
			n = n - m;				
		} else if (n % 50 > 25) {		
			m = n % 50;
			n = n - m;
		} else if (n % 25 > 0) {
			m = n % 25;
			n = n - m;
		}
				
		cout << "Rp "<<n<<",00"<<endl;				
		cout << "Ingin Input Lagi [Y/T] = "; cin >> lagi;
		cout << endl;
	} while (lagi == 'Y');
	system("pause");
	return 0;
}
