#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct corredor{
	char nombre[30]; 
	char sexo[20]; 
	char club[50];
	int edad;
}corredor1;


int main(){
	char categoria[15];
	
	cout<<"Ingrese su nombre: "; cin.getline(corredor1.nombre, 30, '\n');
	cout<<"Ingrese su edad: "; cin>>corredor1.edad;
	fflush(stdin);
	cout<<"Ingrese su sexo: "; cin.getline(corredor1.sexo, 20, '\n');
	cout<<"Ingrese su club de pertenencia: "; cin.getline(corredor1.club, 50, '\n');
	
	if(corredor1.edad<=18){
		strcpy(categoria,"Juvenil");
	}
	else if(corredor1.edad<=40){
		strcpy(categoria, "Senor");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	
	
	strupr(corredor1.nombre);
	cout<<"\n\tREGISTRO APROBADO";
	cout<<"\nNombre: "<<corredor1.nombre<<endl;
	cout<<"Edad: "<<corredor1.edad<<endl;
	cout<<"Sexo: "<<corredor1.sexo<<endl;
	cout<<"Club de pertenencia: "<<corredor1.club<<endl;
	cout<<"CATEGORIA: "<<categoria<<endl;
	
	system("pause");
	return 0;
}
