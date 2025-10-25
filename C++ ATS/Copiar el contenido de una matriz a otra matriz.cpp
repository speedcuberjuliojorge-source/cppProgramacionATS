#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int matriz[100][100], matriz2[100][100], filas, columnas;
	
	cout<<"Cuantas filas tendra la matriz: "; cin>>filas;
	cout<<"Cuantas columna tendra la matriz: "; cin>>columnas;
	
	for(int f=0; f<filas;f++){
		for(int c=0;c<columnas;c++){
			matriz[f][c]=1+rand()%(20);
		}
	}
	
	for(int f=0; f<filas;f++){
		for(int c=0;c<columnas;c++){
			matriz2[f][c]=matriz[f][c];
		}
	}
	
	for(int f=0;f<filas;f++){
		for(int c=0;c<columnas;c++){
			cout<<matriz2[f][c]<<"\t";
		}
		cout<<endl;
	}
	
	
	
	system("PAUSE");
	return 0;
}
