#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cad1[300], cad2[300];

	cout<<"Ingrese una cadena de texto: "; gets(cad1);	
	cout<<"Ingrese otra cadena de texto: "; gets(cad2);
	
	if(strcmp(cad1,cad2) == 0 ){
		cout<<"Ambas cadenas son iguales";
	}
	
	else{
		if(strcmp(cad1,cad2)>0){
			cout<<"La cadena:'"<<cad1<<"' esta despues alfabeticamente"<<endl;
		}
		if(strcmp(cad1,cad2)<0){
			cout<<"La cadena:'"<<cad2<<"' esta despues alfabeticamente"<<endl;
		}		
	}
	
	getch();
	return 0;
}
