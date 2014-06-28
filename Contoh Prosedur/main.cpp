#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>

float kecepatan(float s, float t);
void jumlah_deret(int batas, int *jumlah);
void pangkat_dua(float *bil);

float kecepatan(float s, float t) { //Parameter Masukan
	float v;
	
	v = s/t;
	
	return v;
}

void jumlah_deret(int batas, int *jumlah) {  //Parameter Keluaran
	int x;
	*jumlah = 0;
	
	for (x=1;x<=batas;x++) {
		*jumlah = *jumlah + x;
	}
}

void pangkat_dua(float *bil) {	//Parrameter Masukan/Keluaran
	*bil = pow(*bil,2);
}

using namespace std;

int main(int argc, char *argv[])
{
	float s_isi, t_isi, v;	
	cout<<"Masukkan jarak (KM) : "; cin>>s_isi;
	cout<<"Masukkan waktu (S)  : "; cin>>t_isi;
	
	v = kecepatan(s_isi,t_isi);
	
	cout<<setiosflags(ios::fixed);
	cout<<"Kecepatan           = "<<setprecision(2)<<v<<" KM/Jam"<<endl<<endl;
	
	
	int batas, jumlah;	
	cout<<"Masukkan Batas Deret : "; cin>>batas;
	jumlah_deret(batas, &jumlah);
	cout<<"Jumlah Deret         = "<<jumlah<<endl<<endl;
	
	
	float bilangan;
	cout<<"Masukkan Bilangan : "; cin>>bilangan;
	pangkat_dua(&bilangan);
	cout<<setiosflags(ios::fixed);
	cout<<"Pangkat Dua       = "<<setprecision(2)<<bilangan<<endl<<endl;
	
	system("pause");
	return 0;
}
