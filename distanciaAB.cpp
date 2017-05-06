#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int distancia(int x, int y);
int main(int argc, char** argv) {
	int a, b;
	cout<<"ingrese la coordenada en el eje X: ";cin>>a;
	cout<<"ingrese la coordenada en el eje Y: ";cin>>b;
	cout<<"La distancia entre los puntos es: "<<distancia(a, b);
	
	return 0;
}
int distancia(int x, int y){
	int d;
	d = sqrt(x*x + y*y);
	return d;
}
