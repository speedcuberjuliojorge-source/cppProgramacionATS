#include<iostream>
using namespace std;

int main(){
	float a, b, c, d, promedio=0;
	
	cout<<"Ingrese la calificacion del primer alumno: "; cin>> a;
	cout<<"\nIngrese la calificacion del segundo alumno: "; cin>> b;
	cout<<"\nIngrese la calificacion del tercer alumno: "; cin>> c;
	cout<<"\nIngrese la calificacion del cuarto alumno: "; cin>> d;
	
	promedio = (a+b+c+d)/4;
	
	cout.precision(3);
	cout<<"La nota promedio final es: "<<promedio;
	
	
	return 0;
}//int main()
