#include<iostream>
#include<conio.h>

using namespace std;

int main () {
	
	long long n, inverso = 0;
	
	cout<<"Digite un numero mayor o igual a 1 hasta 1000000000: ";cin>>n;
	
	while(n < 1 || n > 1000000000){
		
		cout<<"Digite un numero entre el intervalo dado: ";cin>>n;
	}
	
	int original = n;
	
	while(n>0){
		
		int digito = n % 10;
		
		inverso = inverso * 10 + digito;
		
		n /= 10;
		
	}
		
	
	
	if(original == inverso ){
		
		cout<<"El numero es capicua "<<endl;
		
	}else{
		
		cout<<"No es capicua"<<endl;
	}
	
	
	
	
	
	
	
	getch();
	return 0;
}