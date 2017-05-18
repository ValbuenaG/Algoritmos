#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cin>>a;
	if((a%4 == 0)&&(a%100 != 0 || a%400 == 0)){
		cout<<"es bisiesto";
	}
	else{
		cout<<"no es bisiesto";
	}
	return 0;
}
