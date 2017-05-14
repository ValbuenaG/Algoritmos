#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double potencia (int b, int e);
int main(int argc, char** argv) {
	int B = 0, E = 0;
	
	cin>>B;cin>>E;
	cout<<potencia(B, E);
	return 0;
}
double potencia(int b, int e){
	int aux = b;
	for(int i=1; i<e; i++){
		b*=aux;
	}
	return b;

}
