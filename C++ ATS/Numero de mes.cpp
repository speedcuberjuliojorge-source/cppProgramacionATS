#include<iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese el numero del mes para descubrir a cual corrresponde: "; cin>>numero;
	
	switch(numero){
		case 1: cout<<"El numero "<<numero<<" corresponde al mes enero"    ;break;
		case 2: cout<<"El numero "<<numero<<" corresponde al mes febrero"  ;break;
		case 3: cout<<"El numero "<<numero<<" corresponde al mes marzo "   ;break;
		case 4: cout<<"El numero "<<numero<<" corresponde al mes abril "   ;break;
		case 5: cout<<"El numero "<<numero<<" corresponde al mes mayo "    ;break;
		case 6: cout<<"El numero "<<numero<<" corresponde al mes junio "   ;break;
		case 7: cout<<"El numero "<<numero<<" corresponde al mes julio "   ;break;
		case 8: cout<<"El numero "<<numero<<" corresponde al mes agosto "  ;break;
		case 9: cout<<"El numero "<<numero<<" corresponde al mes septiembre"       ;break;
		case 10: cout<<"El numero "<<numero<<" corresponde al mes octubre"         ;break;
		case 11: cout<<"El numero "<<numero<<" corresponde al mes noviembre"       ;break;
		case 12: cout<<"El numero "<<numero<<" corresponde al mes diciembre"       ;break;
	}
	return 0;
}
