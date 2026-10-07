#include<iostream>

using namespace std;

int main(){
	
	long long n;
	
	cout<<"Digite un numero entre 2 y 1000000: ";cin>>n;
	
	while( n < 2 || n > 1000000){
		
		cout<<"Digite el numero entre el intervalo correcto: ";cin>>n;
		
	}
	
	bool primo = true;
	for(int i = 2; i * i <=n ; i++){
		
		if( n % i == 0){
			primo = false;
			break;
		}
	}
	
	if(primo){
		
		cout<<"Es primo "<<endl;
	}
	else{
		
		cout<<"No es primo"<<endl;
	}
	
	return 0;
}