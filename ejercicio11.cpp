#include<iostream>
#include<time.h>

using namespace std;

int main(){

int numero,dato,contador=0;

srand(time(NULL));
dato=1+rand()%(100);

do{
	cout<<"Digite un numero: ";cin>>numero;
	
	if(numero>dato){
		cout<<"Digite un  numero menor: "<<endl;
	}
	if(numero<dato){
		cout<<"Digite un numero mayor: "<<endl;
	}
	contador++;
}	while(numero!=dato);

cout<<"Felicidades adivinaste el numero"<<endl;
cout<<"Numero de intentos: "<<contador<<endl;
	
	
	
	
	
	
	
	return 0;
}