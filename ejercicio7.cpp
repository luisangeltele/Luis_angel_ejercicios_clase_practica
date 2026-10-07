#include<iostream>

using namespace std;

int main (){
	
	long long n;
	
	cout<<"Digite un numero entre 1 y 100000: ";cin>>n;
	
	while(n < 1 || n > 100000){
		
		cout<<"Digite el numero entre el intervalo correcto: ";cin>>n;
		
	}
	
	int suma = 0;
	for(int i = 1; i < n; i++){
		
		if(n % i == 0){
			
			suma+= i;
		}
	}
	
	if(suma == n){
		
		cout<<"Es perfecto "<<endl;
	}
	else{
		cout<<"No es perfecto "<<endl;
	}
	
	
	
	
	
	
	
return 0;
	
}