#include<iostream>
#include<conio.h>
using namespace std;

int maint(){
		int mat1[3][3], mat2[3][3];
		
		//DEFININIR MATRIZ 1
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<"Ingrese un valor para ["<<f<<"]["<<c<<"]: ";cin>>mat1[f][c];
			}
		}
		
		
		getch();
		return 0;
		
}
