#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
	char nombre[301];
	
	cout<<"Ingrese su nombre: "; cin.getline(nombre, 300, '\n');
	strupr(nombre);
	
	if(nombre[0] == 'A'){
		strlwr(nombre);
	}
	
	cout<<nombre<<endl;
	
	
	
	system("PAUSE");
	return 0;
}
