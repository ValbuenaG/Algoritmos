#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char frase[250];
	int cl = 0, m=0;
	cin.getline(frase, 250,'\n');
	for(int i = 0; frase[i]!='\0'; i++){
		cl++;
		if(frase[i]==' '){
			if(cl>m){
				m = cl;
				cl=0;
			}
		}
		
	}
	cout<<cl;
	return 0;
}
