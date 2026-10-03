#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a,b ;
	
	cout<<"Digite dos numeros: ";
	cin>>a>>b;
	
	
	while(a < 1 || a > 1000000 || b < 1 || b > 1000000){
		
		cout<<"Digite los numeros entre 1 y 1000000: ";
		cin>>a>>b;
	}

	while(b!=0){
	
	int temp = a;
	
	a = b;
	
	b = temp % b;	
	
	}
	
	cout<<"El maximo comun divisor es: "<<a<<endl;
	
	
	
	
	
	
	
	
	getch();
	return 0;
	
}