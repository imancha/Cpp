#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

void textcolor(int color){
	HANDLE hcolor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

int main(int argc, char** argv) {
	srand(time(NULL));
	for(int i=0; i<16; i++){
		textcolor(i); cout << i << " ";
		cout << rand()%7+9 << endl;
	}
	system("pause");
}
