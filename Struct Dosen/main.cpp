#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef struct{
	long int nip;
	char nama[30];
	char alamat[20];
}data_dosen;

data_dosen dosen1,dosen2;

int main(int argc, char** argv) {
	cout<<"Data Dosen Pertama"<<endl;
	cout<<"------------------"<<endl;
	cout<<"NIP    : "; cin>>dosen1.nip;
	cout<<"Nama   : "; fflush(stdin); cin.get(dosen1.nama,30);
	cout<<"Alamat : "; fflush(stdin); cin.get(dosen1.alamat,20);
	cout<<endl<<endl;
	cout<<"Data Dosen Kedua"<<endl;
	cout<<"------------------"<<endl;
	cout<<"NIP    : "; cin>>dosen2.nip;
	cout<<"Nama   : "; fflush(stdin); cin.get(dosen2.nama,30);
	cout<<"Alamat : "; fflush(stdin); cin.get(dosen2.alamat,20);
	system("cls");
	cout<<"Data Dosen Pertama"<<endl;
	cout<<"------------------"<<endl;
	cout<<"NIP    : "<<dosen1.nip<<endl;
	cout<<"Nama   : "<<dosen1.nama<<endl;
	cout<<"Alamat : "<<dosen1.alamat<<endl;
	cout<<endl<<endl;
	cout<<"Data Dosen Kedua  "<<endl;
	cout<<"------------------"<<endl;
	cout<<"NIP    : "<<dosen2.nip<<endl;
	cout<<"Nama   : "<<dosen2.nama<<endl;
	cout<<"Alamat : "<<dosen2.alamat<<endl<<endl;
	system("pause");
	return 0;
}
