#include <iostream>
using namespace std;

int main(){
	float A=0, B=0, C=0, D=0, resultado=0;
	
	cout<<"Bienvenido al calculador de la exprecion: (A+B)/(C+D)\n";
	cout<<"Ingrese el valor para A: "<<endl; cin>> A;
	cout<<"Ingrese el valor para B: "<<endl; cin>> B;
	cout<<"Ingrese el valor para C: "<<endl; cin>> C;
	cout<<"Ingrese el valor para D: "<<endl; cin>> D;
	
	resultado=(A+B)/(C+D);
	
	cout.precision(3);
	cout<<"El resultado a la operacion es: "<<resultado;
	
	
	
	return 0;
	
}//int main()
