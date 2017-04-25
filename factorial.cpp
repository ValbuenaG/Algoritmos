#include <iostream>

using namespace std;

int main() {

double n = 0, f = 0;


cout<<"ingrese un numero para calcular el factorial: "; cin>>n;

	f = n;

		for(double i = n-1; i>=1; i--){
		f *= i;
	}
	cout<<"el factorial del numero es: "<<f;
	
	

}


