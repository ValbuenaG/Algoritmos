#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x, y;
	cin>>x;
	cin>>y;
	if((x+y)%2 == 0){
		cout<<"la suma es par";
	}else{
		cout<<"la suma es impar";
	}
	return 0;
}
