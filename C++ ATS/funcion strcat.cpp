#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
	char saludo[] = "Hola, que tal ";
	char nombre[51];
	char signo[] =" ?";
	char concat[200];
	
	cout<<"Ingrese su nombre: "; cin.getline(nombre, 51, '\n');
	
	
	strcpy(concat, saludo);
	strcat(concat, nombre);
	strcat(concat, signo);
	
	cout<<concat<<endl;
	
	system("pause");
	return 0;
}
