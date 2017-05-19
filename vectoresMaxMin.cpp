#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int v[], int n);
int min(int v[], int n);
float prom(int p[], int n);
int main(int argc, char** argv) {
	int c = 5;
	int l1[c] = {0, 20, 30, 10, 12}, l2[c]={1,-3,6,7,8}, l3[c] = {5, 8,13, 21, 34};
	cout<<max(l1, c)<<endl;
	cout<<min(l3, c)<<endl;
	cout<<prom(l2, c)<<endl;
}
int max(int v[], int n){
	int m = 0;
	for(int i = 0; i<n; i++){
		if(v[i] > m){
			m = v[i];
		}
		
	}
	
	return m;
}
int min(int v[], int n){
	int min = v[0];
	for(int i = 0; i<n; i++){
		if(v[i] < min){
			min = v[i];
		}
		
	}
	return min;
}
float prom(int v[], int n){
	float promedio = 0;
	for(int i = 0; i<n; i++){
		promedio+= v[i];
	}
	promedio/=n;
	return promedio;
}

