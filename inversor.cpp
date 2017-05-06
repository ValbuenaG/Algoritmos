#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string p, p1;
	cout<<"ingrese una palabra: ";
	getline(cin, p);
	p1 = string(p.rbegin(), p.rend());
	cout<<"\nLa cadena inversa es: "<<p1;
	
	return 0;
}
