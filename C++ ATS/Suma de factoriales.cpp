#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int num, c;
	double factorial, suma=0;
	
	cout<<"\tSuma de factoriales\nHasta que numero desa calcular la suma de factoriales: ";cin>>num;
	
	for(int i=1; i<=num;i++){
		factorial=1;
		for(c=2;c<=i;c++){
		factorial=factorial*c;
		}
		suma=suma+ factorial;
	}
		
	
	cout.precision(3);
	cout<<suma<<endl;
	
	
	
	
	system("PAUSE");
	return 0;
}
