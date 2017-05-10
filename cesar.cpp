#include <iostream>
#include<cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char p[100];
	char alf[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRSTUVWXYZ";
	cout<<"ingrese el texto: ";gets(p);
	int j;
	for (int i =0; i<strlen(p); i++){
		j = 0;
			while(j<52){
				if(p[i] == alf[j] && (j<23 ||(j>=26 && j<49))){
					p[i] = alf[j+3];
					j = 52;
				}
				if(p[i] == alf[j] && (j>=23 && j<26)){
					if(p[i] == 'x')
					{
						p[i] = 'a';
					}
					if(p[i] == 'y')
					{
						p[i] = 'b';
					}
					if(p[i] == 'z')
					{
						p[i] = 'c';
					}
					j = 52;
				}
				if(p[i] == alf[j] && (j>=49 && j<52)){
					
					if(p[i] == 'X')
					{
						p[i] = 'A';
					}
					if(p[i] == 'Y')
					{
						p[i] = 'B';
					}
					if(p[i] == 'Z')
					{
						p[i] = 'C';
					}
				
						j=52;
				}
			j++;
			}
			
			
	}
	cout<<p;
	
	return 0;
}
