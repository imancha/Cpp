/* NIM : 10111143
 * Nama : Mohammad Abdul Iman Syah
 * Kelas : IF-7
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) 
{
	char input[20];
	bool palindrome = true;
	
	cout << "Input  : \n\t"; cin.getline(input,sizeof(input));
	
	int panjang;
	int akhir;
	
	panjang = strlen(input);
	akhir = panjang - 1;
	
	for (int i=0; i<panjang; i++) {
		if (input[i] != input[akhir]) {
			palindrome = false;
			break;
		}
		akhir--;
	}
	
	cout << "\nOutput : \n\t";

	if (palindrome) {
		cout << "Palindrome"<<endl<<endl;
	} else {
		cout << "Bukan Palindrome"<<endl<<endl;
	}		

	system("pause");
	return 0;
}
