#include <iostream>
#include <cstdlib>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	string s;
	
	cout << "Input : "; getline(cin,s);
	cout << endl;
	
	for(int i=0; i<s.length(); i++){
		cout << s[i];
		if(s[i] >= '0' && s[i] <= '9') cout << " isDigit";
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) cout << " isHuruf";
		cout << endl;
	}
	
	cout << endl;
	
	bool isDigit = false;
	
	if(s[0] >= '0' && s[0] <= '9'){
		for(int i=1; i<s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				isDigit = true;	
			}else{
				isDigit = false;
				cout << "Missmatch Type";
				break;
			}
		}
	}else if((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z')){
		cout << "Final state : isIdentifier";
	}
	
	if(isDigit){
		cout << "Final state : isInteger";
	}			
	
	getch();
}
