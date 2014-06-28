#include <iostream>
#include <cstdlib>
#include <conio2.h>
#include <fstream>
#include <iomanip>

using namespace std;

struct myData{
	int id;
	string username;
	string password;
	string name;
	string city;
};

struct queue{
	myData data;
	queue *next;
};

void enQueue(queue **root, myData &info){
	if(*root == NULL){
		*root = new queue;
		(*root)->data = info;
		(*root)->next = NULL;
	}else{
		enQueue(&((*root)->next), info);
	}
}

void deQueue(queue *root){
	if(root != NULL){
		cout << setiosflags(ios::right)
			 << setw(2)
			 << root->data.id
			 << "\t"
			 << resetiosflags(ios::right)
			 << setiosflags(ios::left)
			 << setw(14)
			 << root->data.username
			 << setw(14)
			 << root->data.password
			 << setw(24)
			 << root->data.name
			 << "\t"
			 << setw(10)			 
			 << root->data.city
			 << endl;
			 
		deQueue(root->next);
	}
}

string Nama(string x){
	for(int i=0; i<x.length(); i++){
		if(x[i] == '_'){
			x[i] = ' ';
		}
	}
	return x;
}

void loadFile(queue **root, myData &info){
	ifstream fin("myData.dat");
	
	if(fin){
		while(!fin.eof()){
			fin >> info.id
				>> info.username
				>> info.password
				>> info.name;
				   info.name = Nama(info.name);
			fin	>> info.city;
			enQueue(&(*root),info);
		}
	}
	
	fin.close();
}

void input(queue *root, myData info){
	char lagi;
	
	do{
		clrscr();
		cout << "ID       : "; cin >> info.id;
		cout << "Username : "; fflush(stdin); getline(cin, info.username);
		cout << "Password : "; fflush(stdin); getline(cin, info.password);
		cout << "Name     : "; fflush(stdin); getline(cin, info.name);
		cout << "City     : "; fflush(stdin); getline(cin, info.city);
		
		enQueue(&(root), info);
		
		do{
			cout << "\n*Input Lagi [Y/T] : "; lagi = getche();
			lagi = toupper(lagi);
		}while(!(lagi == 'Y' || lagi == 'T'));
	}while(lagi == 'Y');
}

void output(queue *root){	
	if(root != NULL){
		gotoxy(2,1);  cout << "ID";
		gotoxy(9,1); cout << "USERNAME";
		gotoxy(23,1); cout << "PASSWORD";
		gotoxy(37,1); cout << "NAMA";
		gotoxy(65,1); cout << "KOTA\n\n";		
		deQueue(root);
	}else{
		cout << "empty...";
	}
}

void update(queue *root){
	int id;
	
	if(root != NULL){		
		cout << "ID       : "; cin >> id;
		
		while(root != NULL){
			if(root->data.id == id){
				cout << "Username : " << root->data.username
					 << "\nPassword : " << root->data.password
					 << "\nNama     : " << root->data.name
					 << "\nCity     : " << root->data.city;
		
				cout << "\n\n*Starting Update\n"
					 << "-----------------\n";
				cout << "ID       : " << root->data.id << endl;
				cout << "Username : "; fflush(stdin); getline(cin, root->data.username);
				cout << "Password : "; fflush(stdin); getline(cin, root->data.password);
				cout << "Name     : "; fflush(stdin); getline(cin, root->data.name);
				cout << "City     : "; fflush(stdin); getline(cin, root->data.city);
				cout << "\n\n*Update Success...";
				getch();
				break;
			}else{
				root = root->next;
			}
		}				
	}
}

void deletE(queue **root){
	int id;
	queue *hapus;		
	
	if(root != NULL){		
		cout << "ID       : "; cin >> id;
		
		while(*root != NULL){
			if((*root)->data.id == id){
				hapus = *root;
				*root = hapus->next;
				
				cout << "Username : " << hapus->data.username
					 << "\nPassword : " << hapus->data.password
					 << "\nNama     : " << hapus->data.name
					 << "\nCity     : " << hapus->data.city;				
				
				hapus = NULL;
				
				cout << "\n\n*Successfully deleted...";
				break;
			}else if((*root)->next->data.id == id){
				hapus = (*root)->next;
				(*root)->next = hapus->next;
				
				cout << "Username : " << hapus->data.username
					 << "\nPassword : " << hapus->data.password
					 << "\nNama     : " << hapus->data.name
					 << "\nCity     : " << hapus->data.city;				
				
				hapus = NULL;
				
				cout << "\n\n*Successfully deleted...";					
				break;		
			}else{
				root = (&(*root)->next);
			}
		}				
		getch();
	}	
}

string _Nama(string x){
	for(int i=0; i<x.length(); i++){
		if(x[i] == ' '){
			x[i] = '_';
		}
	}
	return x;
}

void uploadFile(queue *root){
	ofstream fout("myData.dat", ios::trunc);
	
	while(root != NULL){
		fout << "\n "
			 << setiosflags(ios::right)
			 << setw(3) << root->data.id << "\t"
			 << resetiosflags(ios::right)
			 << setiosflags(ios::left)
			 << setw(15) << root->data.username << "\t"
			 << setw(15) << root->data.password << "\t"
			 << setw(25) << _Nama(root->data.name) << "\t"
			 << _Nama(root->data.city);
			 
			 root = root->next;
	}
	
	fout.close();
}

void destroy(queue *root){
	if(root != NULL){
		delete root;
		destroy(root->next);
	}
}

int main(int argc, char** argv) {
	int menu;
	myData data;
	queue *root = NULL;
	
	loadFile(&root, data);
	
	do{
		do{
			clrscr();
			cout << "+--------------------+\n"
				 << "| MENU CRUD FILE C++ |\n"
				 << "+--------------------+\n"
				 << "| { 1 }  Input       |\n"
				 << "| { 2 }  Output      |\n"
				 << "| { 3 }  Update      |\n"
				 << "| { 4 }  Delete      |\n"
				 << "| { 0 }  Exit        |\n"
				 << "+--------------------+\n"
				 << "  Pilihan : "; menu = getche();
		}while(menu > '4');
		clrscr();
		switch(menu){
			case '1' : 	input(root, data);
						break;
			case '2' : 	output(root);
						getch();
						break;
			case '3' :	update(root);						
						break;
			case '4' : 	deletE(&(root));						
						break;
		}
	}while(menu != '0');
	
	uploadFile(root);
	destroy(root);
	return 0;
}
