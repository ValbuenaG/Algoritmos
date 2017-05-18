#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	if(n>0){
		cout<<"n es positivo"<<endl;
	}else if(n<0){
		cout<<"n es negativo"<<endl;
	}
	else{
		cout<<"n es nulo";
	}
	return 0;
}
