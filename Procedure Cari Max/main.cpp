#include <cstdlib>
#include <iostream>
#include <ctime>
#define maks 999

using namespace std;

typedef int larik[maks];

int main(int argc, char** argv) 
{
	srand(time(NULL));
	larik m;
	int n;
	
	cout << "Banyak : "; cin >> n;
	
	for (int i=0; i<n; i++){
		cout << rand()%n; cin >> m[i];
	}
	
	for (int i=0; i<n; i++){
		cout << m[i]<<" ";
	}

	system("pause");
	return 0;
}
