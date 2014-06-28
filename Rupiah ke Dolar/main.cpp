#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	long int uang;
	
	cout<<"Masukkan Nilai Rupiah : "; cin>>uang;
	
	if(uang < 5000)
	{
		cout<<"Nilai Rupiah terlalu kecil..."<<endl;
	}
	else
	{
		long int hasil;
		int sisa;
		
		hasil = uang / 5000;
		sisa  = uang % 5000;
		
		cout<<"Rp "<<uang<<" = $ "<<hasil<<endl;
		cout<<"Sisa Rp "<<sisa<<endl;
	}
	system("pause");
	return 0;
}
