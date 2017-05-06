#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int posInicial(int t, int tf, int v);
int main(int argc, char** argv) {
	int tF, tI, vI;
	cout<<"\ningrese el tiempo inicial: ";cin>>tI;
	cout<<"\ningrese el tiempo final: ";cin>>tF;
	cout<<"\ningrese la velocidad inicial: ";cin>>vI;
	cout<<"\nla posicion del movil es de: "<<posInicial(tI, tF, vI)<<"M";
	return 0;
}
int posInicial(int t,int tf, int v){
	int x = 0;
	x = v*(tf-t);
	return x;
}
