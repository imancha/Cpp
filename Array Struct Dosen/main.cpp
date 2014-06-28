#include <iostream>
#include <cstdlib>

#define maks 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef struct
{
	long int nip;
	char nama[30];
	char alamat[20];
}data_dosen;

data_dosen dosen[maks];

int main(int argc, char** argv) {
	int i,j;
	
	cout<<"Banyak Data Dosen : "; cin>>j;
	cout<<endl;
	
	for(i=0;i<j;i++)
	{			
		cout<<"Data Dosen ke-"<<i+1<<endl;
		cout<<"----------------"<<endl;
		cout<<"NIP    : "; cin>>dosen[i].nip;
		cout<<"Nama   : "; fflush(stdin); cin.get(dosen[i].nama,30);
		cout<<"Alamat : "; fflush(stdin); cin.get(dosen[i].alamat,20);
		cout<<endl<<endl;
	}
	
	system("cls");
	
	for(i=0;i<j;i++)
	{
		cout<<"Data Dosen ke-"<<i+1<<endl;
		cout<<"----------------"<<endl;
		cout<<"NIP    : "<<dosen[i].nip<<endl;
		cout<<"Nama   : "<<dosen[i].nama<<endl;
		cout<<"Alamat : "<<dosen[i].alamat<<endl<<endl;		
	}
	system("pause");
	return 0;
}
