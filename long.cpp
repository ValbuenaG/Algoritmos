#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Long(float r);
int main(int argc, char** argv) {
	float r;
	cout<<"ingrese el radio de la circunferencia en metros: ";
	cin>>r;
	cout<<"La longitud es: "<<Long(r)<<" m2";
	return 0;
}
float Long(float r){
	float l;
	l = 2*r*3,14;
	return l;
}
