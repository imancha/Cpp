#include <cstdlib>
#include <iostream>

using namespace std;

int pangkat(int a, int n);

int main(int argc, char** argv) 
{
	int bil;
	int bes;
	
	cout << "Bilangan : "; cin >> bil;
	cout << "Pangkat  : "; cin >> bes;
	
	pangkat(bil,bes);

	system("pause");
	return 0;
}

int pangkat(int a, int n){
	int i;
	int hasil = 1;
	
	for (i=0; i<n; i++){
		hasil = hasil * a;
	}		
	
	cout << "Hasil    : "<<hasil<<endl<<endl;
}
