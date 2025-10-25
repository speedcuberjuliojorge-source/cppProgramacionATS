#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int numeros[5], multiplicacion[5];
	
	for(int i=0; i<5;i++){
		cout<<"Ingrese un valor para el espacio "<<i+1<<": "; cin>>numeros[i];
		multiplicacion[i]=(numeros[i])*2;
	}
	
	for(int i=0; i<5;i++){
		if(i<4){
			cout<<multiplicacion[i]<<", ";
		}
		else{
			cout<<multiplicacion[i];
			cout<<endl;
		}
		
	}

	
	system("PAUSE");
	return 0;
}
