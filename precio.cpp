#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float po, dcto = 0, iva , pfinal;
	cout<<"introduzca el precio bruto: ";
	cin>>po;
	if(po>50){
		dcto = 0.05*po;
	}
	iva = 0.13*po;
	
	pfinal = (po-dcto)+iva;
	cout<<"el importe final es de : "<<pfinal<<endl;
	
	return 0;
}
