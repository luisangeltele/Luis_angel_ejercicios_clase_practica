#include<iostream>

using namespace std;

int main (){
	
	long long n, pasos = 0;
	
	cout<<"Digite un numero dentre 1 a 1000000: ";cin>>n;
	
	while(n < 1 || n > 1000000){
		
		cout<<"Digite el numero entre el intervalo correcto: ";cin>>n;
		
	}
	
	while( n != 1){
		
		if( n % 2 ==0){
			
			n = n / 2;
			
			pasos++;
		} 
		else{
		 
		 n = n * 3 + 1;	
			pasos++;
		}
		
	}
	
	
	cout<<"Cantidad de pasos para llegar a 1: "<<pasos<<endl;
	
	
	return 0;
	
}