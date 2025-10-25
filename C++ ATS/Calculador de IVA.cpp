#include <iostream>
using namespace std;

int main(){
	float precio = 0, precioIVA = 0;
	cout<<"Bienvenido al calculador de IVA\nIngrese el precio del producto sin IVA: ";
	cin>>precio;
	precioIVA = precioIVA = precio + (precio*0.16);
	cout<<"\n\nEl precio sin IVA es: "<<precio<<"\nEl precio con IVA es: "<<precioIVA;
	
	
	
	return 0;
}//int main()
