#include <iostream>
using namespace std;

int main(){
	char car;
	
	cout<<"Ingrese un caracter: ";cin>>car;
	
	switch(car){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"El caracter es una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<	"El caracter es una vocal mayuscula"; break;
		default: cout<<"El caracter no es vocal"; break;
		
	}//switch(car)
	
	return 0;
}//int main()
