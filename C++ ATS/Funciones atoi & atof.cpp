#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char entero[200],flotante[200];
	float suma=0;
	int enter;
	float flotant;
	
	cout<<"Ingrese un numero entero: "; cin.getline(entero,199,'\n');
	cout<<"Ingrese un numero real: "; cin.getline(flotante,199,'\n');
	
	
	enter = atoi(entero);
	flotant = atof(flotante);
	
	suma= enter + flotant;
	cout<<suma<<endl;
	
	
	system("pause");
	return 0;
}
