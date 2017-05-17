#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int x =0, y =1, z = 1;
	cin>>n;
	cout<<0<<endl<<1<<endl;
	for(int i = 0; i<n; i++){
		z = x + y;
		cout<<z<<endl;
		x = y;
		y = z;
		
		
	}
	return 0;
}
