#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	cout<<"-------------------------"<<endl;
	cout<<"Tipe Data          Memori"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Char                 "<<sizeof(char)<<endl;
	cout<<"Signed Char          "<<sizeof(signed char)<<endl;
	cout<<"Unsigned Char        "<<sizeof(unsigned char)<<endl;
	cout<<endl;
	cout<<"Int                  "<<sizeof(int)<<endl;
	cout<<"Unsigned Int         "<<sizeof(unsigned int)<<endl;
	cout<<"Signed Int           "<<sizeof(signed int)<<endl;
	cout<<"Short Int            "<<sizeof(short int)<<endl;	
	cout<<"Unsigned Short Int   "<<sizeof(unsigned short int)<<endl;
	cout<<"Signed Short Int     "<<sizeof(signed short int)<<endl;
	cout<<"Long Int             "<<sizeof(long int)<<endl;
	cout<<"Unsigned Long Int    "<<sizeof(unsigned long int)<<endl;
	cout<<"Signed Long Int      "<<sizeof(signed long int)<<endl;
	cout<<endl;
	cout<<"Float                "<<sizeof(float)<<endl;
	cout<<"Double               "<<sizeof(double)<<endl;
	cout<<"Long Double          "<<sizeof(long double)<<endl;
	cout<<"-------------------------"<<endl<<endl;	
	system("PAUSE");
	return EXIT_SUCCESS;
}
