#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int bil1,bil2;
	
	cout<<"Masukkan Bilangan Pertama : "; cin>>bil1;
	cout<<"Masukkan Bilangan Kedua   : "; cin>>bil2;
	cout<<endl;
	cout<<"Menu Pilihan Operator"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	
	int pilihan;
	
	cout<<"Menu Pilihan : "; cin>>pilihan;
	cout<<endl;
	
	switch (pilihan)
	{
		case 1 : cout<<"Hasil "<<bil1<<" + "<<bil2<<" = "<<bil1 + bil2<<endl;
				 break;
		case 2 : cout<<"Hasil "<<bil1<<" - "<<bil2<<" = "<<bil1 - bil2<<endl;
				 break;
		case 3 : cout<<"Hasil "<<bil1<<" * "<<bil2<<" = "<<bil1 * bil2<<endl;
				 break;
		case 4 : cout<<"Hasil "<<bil1<<" / "<<bil2<<" = "<<(float)bil1 / bil2<<endl;
				 break;
		default : cout<<"Input Menu Salah..."<<endl;
	}
	system("pause");
	return 0;
}
