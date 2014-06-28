#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char nim[8];
	char nama[31];
	char alamat[15];
	
	cout<<"NIM    : "; cin>>nim;
	cout<<"Nama   : "; fflush(stdin); cin.get(nama,30);
	cout<<"Alamat : "; cin>>alamat;
	cout<<endl;
	cout<<"NIM    : "<<nim<<endl;
	cout<<"Nama   : "<<nama<<endl;
	cout<<"Alamat : "<<alamat<<endl<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
