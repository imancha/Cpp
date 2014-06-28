#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef struct
{
	int bil1;
	int bil2;
}data_bilangan;

void tampil_bilangan(data_bilangan bilangan)
{
	cout<<"Bilangan Pertama = "<<bilangan.bil1<<endl;
	cout<<"Bilangan Kedua   = "<<bilangan.bil2<<endl;
}

void jumlah_bilangan(data_bilangan *bilangan)
{
	bilangan->bil1 = bilangan->bil1 + 1;
	bilangan->bil2 = bilangan->bil2 + 2;
}

int main(int argc, char** argv) {
	data_bilangan bilangan;
	
	cout<<"Bilangan Pertama : "; cin>>bilangan.bil1;
	cout<<"Bilangan Kedua   : "; cin>>bilangan.bil2;
	cout<<endl;
	tampil_bilangan(bilangan);
	cout<<endl;
	jumlah_bilangan(&bilangan);
	cout<<"Bilangan Pertama ditambah 1 = "<<bilangan.bil1<<endl;
	cout<<"Bilangan Kedua   ditambah 2 = "<<bilangan.bil2<<endl<<endl;
	
	system("pause");
	return 0;
}
