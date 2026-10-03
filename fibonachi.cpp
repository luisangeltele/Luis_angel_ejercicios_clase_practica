#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n,x=0,y=1,z=1;
	
	cout<<"Digite el valor de elemntos entre 1 y 40: ";cin>>n;
	

	while(n<1 || n>40){
		cout<<"Digite un numero entre el intervalo correcto: ";
		
		cin>>n;
	}
	if(n==1)
	{
		cout<<"0";
		
	}
	else{
		if(n==2){
			
			cout<<"0"<<" 1 ";
			
			}
		else{
				
		cout<<" 0 "<<" 1 ";
		
		for(int i=2;i<n;i++)
		{
		
		z=x+y;
		
		cout<<z<<" ";
		
		x=y;
		
		y=z;
			}
}

	cout<<"\n";
	
	getch();
	return 0;
}
}