#include <cstdlib>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef struct
{
	int tanggal;
	int bulan;
	int tahun;
}detail_lahir;

detail_lahir data_lahir()
{
	detail_lahir lhr;
	lhr.tanggal = 10;
	lhr.bulan = 6;
	lhr.tahun = 1993;
	return lhr;
}

int main(int argc, char** argv) {
	detail_lahir lahir;
	lahir = data_lahir();
	
	cout<<"Tanggal Lahir : "<<lahir.tanggal<<"-"<<lahir.bulan<<"-"<<lahir.tahun<<endl<<endl;
	system("pause");
	return 0;
}
