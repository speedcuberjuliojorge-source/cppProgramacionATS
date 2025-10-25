#include<iostream>
using namespace std;

int main(){
	double x;
	
	cout<<"Ingrese un valor: "; cin>>x;
	x/=-1;
	
	if(x==0){
		cout<<"Tu numero es 0 no es ni positivo ni negativo";
	}//if(x==0
	else if(x<0){
		cout<<"Tu numero es positivo";
	}//else if(x>0)
	if(x>0){
		cout<<"Tu numero es negativo";
	}//if(x<0)
	
	return 0;
}//int main()

