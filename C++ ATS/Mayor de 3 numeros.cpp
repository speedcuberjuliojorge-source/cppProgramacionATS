#include <iostream>
using namespace std;

int main(){
	float n1, n2, n3;
	
	cout<<"Ingrese 3 numeros: "; cin>>n1>>n2>>n3;
	
	if(n1==n2 && n2==n3){
		cout<<"Los 3 numeros son iguales";
	}//if(n1==n2 && n2==n3)
	else if(n1>n2 && n1>n3){
		cout<<"El "<<n1<<" es el numero mayor";	
	}//else if(n1>n2 && n1>n3)
	if(n2>n1 && n2>n3){
		cout<<"El "<<n2<<" es el numero mayor";
	}//if(n2>n1 && n2>n3)
	if(n3>n1 && n3>n2){
		cout<<"El "<<n3<<" es el numero mayor";
	}//else
	
	
	
	
	
	
	
	return 0;
}//int main()
