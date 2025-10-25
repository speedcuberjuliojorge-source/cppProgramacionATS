#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	double vector[7], suma=0;
	int c=0;
	
	for(int i=0;i<7;i++){
		cout<<"Ingrese un valor para el espacio "<<i+1<<": ";cin>>vector[i];
		suma+=vector[i];
	}
	
	for(int i=0;i<7;i++){
		if(vector[i]==suma-vector[i]){
			cout<<"El valor "<<vector[i]<<" es igual al valor de la suma de los otros elementos\n";
			c=1;
		}
		
	}
	
	if(c!=1){
		cout<<"Ningun vector es igual a la suma del arreglo\n";
	}
	
	
	
	
	getch();
	return 0;
}
