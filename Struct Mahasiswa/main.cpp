#include <iostream>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	int tanggal;
	int bulan;
	int tahun;
}detail_lahir;

typedef struct{
	long int nim;
	char nama[30];
	char alamat[20];
	detail_lahir data_lahir;
}data_mhs;

data_mhs mhs;

int main(int argc, char** argv) {
	cout<<"Data Mahasiswa"<<endl;
	cout<<"--------------"<<endl;
	cout<<"NIM           : "; cin>>mhs.nim;
	cout<<"Nama          : "; fflush(stdin); cin.get(mhs.nama,30);
	cout<<"Alamat        : "; fflush(stdin); cin.get(mhs.alamat,20);
	cout<<"Tanggal Lahir : "; cin>>mhs.data_lahir.tanggal;
	cout<<"Bulan Lahir   : "; cin>>mhs.data_lahir.bulan;
	cout<<"Tahun Lahir   : "; cin>>mhs.data_lahir.tahun;
	system("cls");
	cout<<"Data Mahasiswa"<<endl;
	cout<<"--------------"<<endl;
	cout<<"NIM           : "<<mhs.nim<<endl;
	cout<<"Nama          : "<<mhs.nama<<endl;
	cout<<"Alamat        : "<<mhs.alamat<<endl;
	cout<<"Tanggal Lahir : "<<mhs.data_lahir.tanggal<<endl;
	cout<<"Bulan Lahir   : "<<mhs.data_lahir.bulan<<endl;
	cout<<"Tahun Lahir   : "<<mhs.data_lahir.tahun<<endl<<endl;
	system("pause");
	return 0;
}
