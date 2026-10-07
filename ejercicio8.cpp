#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Digite un numero de tres cifras: ";cin>>n;
	

	
	while(n < 100 || n > 999){
		
		cout<<"Digite un numero de tres cifras: ";cin>>n;
		
	}
	
		int original = n;
	    int suma = 0;
	
	while( n > 0){
		
		int d = n % 10;
		suma += d * d * d;
		n /= 10;
	}
	
	if(suma == original){
		
		cout<<"Es un numero de Armstrong "<<endl;
	
	}else{
		
		cout<<"No es un numero de Armstrong "<<endl;
	
	}
	
	return 0;
}