#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float faCe(float f);
int main(int argc, char** argv) {
	float f;
	cout<<"Ingrese una temperatura en farenheit: ";
	cin>>f;
	cout<<"La temperatura en farenheit es: "<<faCe(f)<<" C";
	return 0;
}
float faCe(float f){
	int c;
	c = (f - 32)*5/9;
}
