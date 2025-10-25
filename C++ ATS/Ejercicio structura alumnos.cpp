#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3];


int main(){	
	
	for(int i=0;i<3;i++){
		cout<<"\tAlumno "<<i+1<<endl;
		cout<<"Ingrese el nombre y primer apellido: "; cin.getline(alumno[i].nombre,30,'\n');
		cout<<"Digite su edad: "; cin>>alumno[i].edad;
		fflush(stdin);
		cout<<"Digite su promedio: "; cin>>alumno[i].promedio;
		cout<<endl;
		fflush(stdin);
	}
	
	if(alumno[0].promedio>alumno[1].promedio && alumno[0].promedio>alumno[2].promedio){
		cout<<"\tMEJOR ALUMNO"<<endl;
		strupr(alumno[0].nombre);
		cout<<"Nombre: "<<alumno[0].nombre<<endl;
		cout<<"Edad: "<<alumno[0].edad<<endl;
		cout<<"Promedio: "<<alumno[0].promedio<<endl;
	}
	else if(alumno[1].promedio>alumno[0].promedio && alumno[1].promedio>alumno[2].promedio){
		cout<<"\tMEJOR ALUMNO"<<endl;
		strupr(alumno[1].nombre);
		cout<<"Nombre: "<<alumno[1].nombre<<endl;
		cout<<"Edad: "<<alumno[1].edad<<endl;
		cout<<"Promedio: "<<alumno[1].promedio<<endl;
	}
	else /*if(alumno[2].promedio>alumno[0].promedio && alumno[2].promedio>alumno[1].promedio)*/{
		cout<<"\tMEJOR ALUMNO"<<endl;
		strupr(alumno[2].nombre);
		cout<<"Nombre: "<<alumno[2].nombre<<endl;
		cout<<"Edad: "<<alumno[2].edad<<endl;
		cout<<"Promedio: "<<alumno[2].promedio<<endl;
	}
	
	system("pause");
	return 0;
}
