#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n=0, x = 1,v=2; 

	
	do{
		cout<<"ingrese un valor: ";
		cin>>n;
	}while(n<0 || n>=20);
	
	int array[n];
	
	for(int i = 0; i<n; i++){
		array[i] = v;
		v+=2;
	}
	
	do {
		cout<<"ingrese un numero par: ";
		cin>>x;
	}while(x%2 != 0);
	
	for(int i; i<n; i++){
		if(x == array[i]){
			cout<<"x es igual al vector en la posicion: "<<i;
		}
	}
	return 0;
}
