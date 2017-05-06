#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool esRectangulo(int x1, int x2, int y1, int y2);
int main(int argc, char** argv) {
	int l1, l2;
	cout<<"ingrese la base del rectangulo: "; cin>>l1;
	cout<<"\ningrese la altura del rectangulo: "; cin>>l2;
	if(esRectangulo(l1,l1,l2,l2)){
		cout<<"es rectangulo";
	}else cout<<"no cumple con las dimensiones de un rectangulo";
	
	
	return 0;
}
bool esRectangulo(int x1, int x2,int y1, int y2){
	return ((x1 == x2)&&(y1 == y2) &&(x1 != y1)
	);
}
