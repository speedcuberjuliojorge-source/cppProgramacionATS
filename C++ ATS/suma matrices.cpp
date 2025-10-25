#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	float mat[100][100], mat2[100][100], mat3[100][100];
	int filas, columnas;
	
	cout<<"Filas: " ;cin>>filas;
	cout<<"Columnas: " ;cin>>columnas;
	
	
	//DEFINIR MATRIZ 1
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas;c++){
			//srand(time(NULL));
			mat[f][c]=0+rand()%+(11);
		}
	}
	
	
	//IMPRIMIR MATRIZ 1
			cout<<"\t MATRIZ 1\n";
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas;c++){
			cout<<mat[f][c]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	
	
	//DEFINIR MATRIZ 2
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas;c++){
			//srand(time(NULL));
			mat2[f][c]=0+rand()%+(11);
		}
	}
	
	//IMPRIMIR MATRIZ 2
		cout<<"\t MATRIZ 2\n"	;
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas;c++){
			cout<<mat2[f][c]<<" ";
		}
		cout<<endl;
	}
		cout<<endl<<endl;
	
	
	//SUMAR MATRICES
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas;c++){
			mat3[f][c]=mat[f][c]+mat2[f][c];
		}
	}
	
	//IMPRIMIR MATRIZ REWSULTANTE
			cout<<"\t MATRIZ RESULTANTE\n"	;
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas;c++){
			cout<<mat3[f][c]<<" ";
		}
		cout<<endl;
	}
		cout<<endl<<endl;
	
	
	system("PAUSE");
	return 0;
}
