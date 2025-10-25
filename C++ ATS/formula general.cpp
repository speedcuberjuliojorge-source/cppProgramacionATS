#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float a,b,c,x=0,x2=0;
	
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "> cin>>c;
	
	x= (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout<< "Los resultados son x1= "<<x;
	cout<< "\nLos resultados son x2= "<<x2;
	
	
	
	
	
	
	return 0;
}//int main()
