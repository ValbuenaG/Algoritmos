#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cuadrado (int V[], int n);
int main(int argc, char** argv) {
	int n;cin>>n;
	
	int V[n];
	
	for(int i = 0; i<n; i++){
		cin>>V[i];
	}
	cuadrado(V, n);
	return 0;
}
void cuadrado(int V[], int n){
	cout<<"El cuadrado de los componentes es: "<<endl;
	for(int i = 0; i<n; i++){
		V[i] *= V[i]; 
		cout<<V[i]<<endl;
	}
}

