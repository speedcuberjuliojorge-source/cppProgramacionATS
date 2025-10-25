#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i;
	
	cout<<"De cuantos espacios desea el array: "; cin>>i;
	i--;
	
	int arreglo[i];

	
	for(int c=0; c<=i;c++){
		cout<<"Ingrese un numero: ";
		cin>> arreglo[c];
	}
	
	for(int c=i; c>=0;c--){
		cout<<c<<" --> "<<arreglo[c]<<endl;
	}
	
	
	getch();
	return 0;
}
