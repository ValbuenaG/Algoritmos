#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int par = 0, impar = 0,a =0, i = 1;
	while(i>0)
	{
		cout<<"\ningrese un numero mayor que 0: ";cin>>a;
		cout<<"\nEl numero ingresado es: "<<a;
		if (a<=0)
		{
			i = 0;
			cout<<"\nla suma de numeros pares es:"<<par;
			cout<<"\nla suma de numeros impares es:"<<impar;
			
			
		}
		else{
			if (a%2 ==0){
				cout<<"\n"<<a<<" es un numero par";
				par += a;
				cout<<"\nla cantidad de numeros par hasta ahora son: "<<par;
			}else{
				cout<<"\n"<<a<<" es un numero impar";
				impar += a;
				cout<<"\nla cantidad de numeros impares hasta ahora son:"<<impar;
			}
		}
	}
	return 0;
}
