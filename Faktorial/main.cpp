#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int fak,j;
	
	cout<<"Masukkan Faktorial = "; cin>>fak;
	cout<<endl;
	cout<<"  n         n! "<<endl;
	cout<<"----------------"<<endl;
	
	for (int i=0;i<=fak;i++) {
		int hasil = 1;
		for (j=1;j<=i;j++) {
			hasil *= j;						
		}		
		printf("%3i %10i \n",i,hasil);
	}
	
	cout<<"----------------"<<endl<<endl;

	system("pause");
	return 0;
}
