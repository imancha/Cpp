#include <cstdlib>
#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char nama[30];
	int lama;
	long int gaji_pokok = 1000000;
	long int gaji_lembur = 5000;
	long int total_gaji_lembur;
	long int gaji_kotor;
	float pajak;
	float gaji_bersih;
	
	cout<<"Nama Pegawai : "; cin.get(nama,30);
	cout<<"Lama Lembur  : "; cin>>lama;
	
	total_gaji_lembur = gaji_lembur * lama;
	gaji_kotor = gaji_pokok + total_gaji_lembur;
	pajak = 0.1 * gaji_kotor;
	gaji_bersih = gaji_kotor - pajak;
	
	system("cls");
	cout<<"     Data Gaji Pegawai"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Nama Pegawai      : "<<nama<<endl;
	cout<<"Gaji Pokok        : "<<gaji_pokok<<endl;
	cout<<"Lama Lembur       : "<<lama<<" jam"<<endl;
	cout<<"Total Gaji Lembur : "<<total_gaji_lembur<<endl;
	cout<<"Gaji Kotor        : "<<gaji_kotor<<endl;
	cout<<setiosflags(ios::fixed);
	cout<<"Pajak 10%         : "<<setprecision(0)<<pajak<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Gaji Bersih       : "<<setprecision(0)<<gaji_bersih<<endl<<endl;
	system("pause");
	return 0;
}
