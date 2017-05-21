#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n = 10, aux = 0;
	
	int v[n];
	for (int i = 0; i<n; i++){
		cin>>v[i];
	}
	for (int i = 0; i<n; i++){
		
		for(int j=0; j <n-1; j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				
			}
		} 
	}
	for (int i = 0; i<10; i++){
		cout<<v[i]<<"; ";
	}
	
	return 0;
}
