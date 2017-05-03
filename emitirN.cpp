#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {

	int n, r;
	cout<<"ingrese un numero para empezar: ";cin>>r;
	cout<<"cantidad de numeros a emitir: ";cin>>n;
	for (int i = n; i>=0; i--){
		cout<<"\n"<<r;
		r++;
	}
	return 0;

}
