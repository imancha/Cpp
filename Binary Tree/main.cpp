#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

struct tree {
	int info;
	tree *left;
	tree *right;
};

void BinaryTree(tree **Head, int data);
void PreOrder(tree *Head);
bool Cari(tree *Head, int data);
int Tinggi(tree *Head, int data);
int Cabang(tree *Head, int data);

int main(int argc, char** argv) {
	tree *Pohon = NULL;	
	
	int n, no, angka;
	
	cout << "Jumlah Node/Simpul : ";
	cin  >> n;
	cout << "Angka Yang Dicari  : ";
	cin  >> no;
	
	srand(time(NULL));
	
	cout << "\nAngka Random : ";
	
	for (int i=0; i<n; i++) {
		angka = rand()%n + 1;					//Random angka dari 1 - n
		cout << " "
		     << angka;
		BinaryTree(&Pohon,angka);				//Pembentukan Binary Tree
	}
	
	cout << "\n\nPreOrder     : ";		
	PreOrder(Pohon);							//Tampil Binary Tree Preorder

	bool ketemu;
	ketemu = Cari(Pohon,no);					//Pencarian Angka
				
	if (ketemu) {	
		cout << "\n\nAngka Ditemukan pada : "
			 << "\n      Root   : "
			 << Pohon->info						//Root
			 << "\n      Level  : "
			 << Tinggi(Pohon,no)				//Level / Depth / Height
			 << "\n      Cabang : "
			 << Cabang(Pohon,no)				//Cabang / Anak
			 << endl;
	} else {
		cout << "\n\nAngka tidak ditemukan.\n\n";
	}

	system("pause");
	return 0;
}

void BinaryTree(tree *(*Head), int data) {
	if ((*Head) == NULL) {
		(*Head) = new tree;
		(*Head)->info = data;
		(*Head)->left = NULL;
		(*Head)->right = NULL;	
	} else {
		if (data < (*Head)->info) {
			BinaryTree(&(*Head)->left, data);
		} else {
			BinaryTree(&(*Head)->right, data);
		}
	}
}

void PreOrder(tree *Head) {
	if (Head != NULL) {
		cout << " "
			 << Head->info;
		PreOrder(Head->left);
		PreOrder(Head->right);
	}
}

bool Cari(tree *Head, int data) {
	if (Head == NULL) {
		return false;
	} else {	
		if (Head->info == data) {
			return true;
		} else if (data < Head->info) {
			return Cari(Head->left, data);
		} else if (data > Head->info) {
			return Cari(Head->right, data);	
		}			
	}
}

int Tinggi(tree *Head, int data) {	
	if (Head->info == data) {
		return 0;
	} else {
		if (data < Head->info) {
			return 1 + Tinggi(Head->left, data);
		} else {
			return 1 + Tinggi(Head->right, data);
		}
	}
}

int Cabang(tree *Head, int data) {
	if (Head->info == data) {
		return 1;
	} else {
		if (data < Head->info) {			
			return 2 * Cabang(Head->left, data);
		} else {
			return 2 * Cabang(Head->right, data) + 1;
		}
	}
}
