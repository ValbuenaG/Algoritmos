#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n = 0, m = 0;
	cout<<"Ingrese un numero para calcular sus multiplos: ";cin>>n;
	for(int i = 1; i <=50; i++){
		m = n*i;
		cout<<"\n"<<m;
	}
	
	return 0;
}
