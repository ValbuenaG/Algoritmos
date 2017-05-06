#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int entero(float a);
int main(int argc, char** argv) {
	float n;
	cout<<"ingrese un numero real: ";cin>>n;
	cout<<"su entero es: "<<entero(n);
	return 0;
}
int entero(float a){
	return a;
}
