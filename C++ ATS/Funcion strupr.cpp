#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cad1[301], cad2[301];
	
	cout<<"Ingresa una cadena de caracteres: "; cin.getline(cad1, 300, '\n');
	cout<<"Ingresa otra cadena de caracteres: "; cin.getline(cad2, 300, '\n');
	
	strupr(cad1); strupr(cad2);
	
	if(strcmp(cad1, cad2)==0){
		cout<<"Ambas cadenas son iguales"<<endl;
	}
	else{
		cout<<"Las cadenas no son iguales"<<endl;
	}
	
	getch();
	return 0;
}
