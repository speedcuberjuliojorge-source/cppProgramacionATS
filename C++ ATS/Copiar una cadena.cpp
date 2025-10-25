#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cad1[300], cad2[300];
	
	cout<<"Ingrese una cadena de caracteres: "; gets(cad1);
	strcpy(cad2, cad1);
	cout<<cad2<<endl;
	
	
	getch();
	return 0;
}
