#include <cstdlib>
#include <iostream>
#define maks 100

using namespace std;

typedef int matriks[maks][maks];

int multi(matriks m, matriks n, int bar, int kol);

int main(int argc, char** argv) 
{
	int baris,kolom;
	matriks m;
	matriks n;	
	
	cout << "Baris : "; cin >> baris;
	cout << "Kolom : "; cin >> kolom;
	cout << endl;
	
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << "M["<<i+1<<"]["<<j+1<<"] : "; cin >> m[i][j];			
		}
		cout<<endl;
	}
	
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << "M["<<i+1<<"]["<<j+1<<"] : "; cin >> n[i][j];			
		}
		cout<<endl;
	}			
	
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout <<m[i][j]<< " ";
		}
		cout<<endl;
	}
	
	cout <<endl;
	
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout <<n[i][j]<< " ";
		}
		cout<<endl;
	}
	
	cout << endl;
	
	multi(m, n, baris, kolom);

	system("pause");
	return 0;
}

int multi(matriks m, matriks n, int bar, int kol){
	matriks h;
	
	for(int i=0; i<bar; i++){
		for (int j=0; j<kol; j++){
			int temp = 0;			
			for (int k=0; k<kol; k++){
				temp = temp + m[i][k] * n[k][j];
			}
			h[i][j] = temp;
		}
	}	
	
	for (int i=0; i<bar; i++){
		for (int j=0; j<kol; j++){
			cout <<h[i][j]<<" ";
		}
		cout<<endl;
	}	
}
