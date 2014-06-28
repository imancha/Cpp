#include <cstdlib>
#include <iostream>

using namespace std;

int faktorial(int n);

int main(int argc, char** argv) 
{
	int bil;
	
	cout << "Bilangan : "; cin >> bil;
	cout << endl;
	
	faktorial(bil);

	system("pause");
	return 0;
}

int faktorial(int n){	
	int fak = 1;
	
	cout <<n<<"! = ";
	
	for (int i=n; i>0; i--){
		fak = fak * i;
		
		cout << i;
		if (i != 1){
			cout << " x ";
		} else {
			
			cout <<endl<< "   = "<<fak<<endl<<endl;
		}
	}		
}
