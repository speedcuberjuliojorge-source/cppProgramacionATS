#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"Ingrese 3 numeros: "; cin>>n1>>n2>>n3;
	cout<<"Ingrese un cuarto numero: ";cin>>n4;
	
	if((n4 == n1) || (n4==n2) || (n4==n3)){
		cout<<"El numero "<<n4<<" coincide con alguno de los primeros numeros ingresados";
	}
	else{
		cout<<"El numero "<<n4<<" no coincide con alguno de los primeros numeros ingresados";
	}
	
	
	return 0;
}//int main()
