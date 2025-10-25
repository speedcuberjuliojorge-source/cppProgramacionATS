#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cad[101];
	char rev[101];
	
	cout<<"\tCOMPRUEBE SI UNA PALABRA ES POLINDROMA\nIngrese la palabra/frase:";
	
	cin.getline(cad,100,'\n');
	strcpy(rev, cad);
	strrev(rev);
	
	
	if(strcmp(cad,rev)==0){
		cout<<"La palabra es polindroma\n";
	}
	else{
		cout<<"La palabra no es polindroma\n";
	}
	
	getch();
	return 0;
}
