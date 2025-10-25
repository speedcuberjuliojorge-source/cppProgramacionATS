#include<iostream>
#include<conio.h>
using namespace std;

int main(){
		int mat1[3][3], mat2[3][3], a=1, mat3[3][3];
		
		//DEFININIR MATRIZ 1
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<"Ingrese un valor para ["<<f<<"]["<<c<<"]: ";cin>>mat1[f][c];
			}
		}
				//IMPRIMIR MATRIZ 1
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<mat1[f][c]<<" ";
			}
			cout<<endl;
		}
		
		
		//DEFININIR MATRIZ 2
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<"Ingrese un valor para ["<<f<<"]["<<c<<"]: ";cin>>mat2[f][c];
			}
		}
		//IMPRIMIR MATRIZ 2
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<mat2[f][c]<<" ";
			}
			cout<<endl;
		}
		
		cout<<"\nResultado: "<<endl;
		
		//CALCULAR E IMPRIMIR MATRIZ RESULTANTE
		
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				mat3[f][c]=0;
				for(int k=0;k<3;k++){
					mat3[f][c]+=mat1[f][k]*mat2[k][c];
				}
			}
		}
		
		//IMPRIMIR MATRIZ RESULTANTE
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<mat3[f][c]<<" ";
			}
			cout<<endl;
		}
		
		getch();
		return 0;
}
