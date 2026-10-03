#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	long long n,factorial = 1;
	
	cout<<"Digite un numero entre 0 y 20: ";cin>>n;
	
	while(n<0||n>20){
		cout<<"Introduzca un valor correcto: ";
		cin>>n;
	}if(n==0||n==1){
		cout<<"El factorial de "<<n<<" es 1"<<endl;
	}else{
	
	for(int i=1;i<=n;i++){
		
		factorial *= i;
		
	}
}
	cout<<"El factorial de "<<n<<" es: "<<factorial;
	
	getch();
	return 0;
}