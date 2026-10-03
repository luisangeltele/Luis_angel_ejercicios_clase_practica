#include<iostream>

using namespace std;

int main(){
	
	long long n, suma_digitos = 0;
	
	cout<<"Digite un numero entre el intervalo 1 - 1000000000: ";cin>>n;
	
	while(n < 1 || n > 1000000000){
		
		cout<<"Digite el numero entre el intervalo mencionado anteriormente: ";cin>>n;
		
	}
	
	while(n>0){
		
		int digitos = n % 10;
		
		suma_digitos = suma_digitos +  digitos;
		
		n /= 10;
	}
	
	cout<<"La suma de sus digitos es: "<<suma_digitos<<endl;
	
	
	
	
	return 0;
	
}