#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int cc = 0, cb=0;
	char frase[100];
	cin.getline(frase, 100, '\n');
	
	for(int i = 0; frase[i] != '\0'; i++){
		if (frase[i] == ' '){
			cb++;
		}
		cc++;
	}

	cc-=cb;
	cout<<"la cantidad de letras es: "<<cc<<endl;
	return 0;
	
}
