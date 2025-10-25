#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
	char texto[300];
	int longitud=0;
	
	cout<<"Ingrese una cadena de caracteres: "; gets(texto);
	longitud= strlen(texto);
	
	if(longitud>10){
		cout<<texto<<endl;
	}
	else{
		cout<<"Su cadena es menor a 10 caracteres"<<endl;
	}
	
	
	
	
	system("pause");
	return 0;
}
