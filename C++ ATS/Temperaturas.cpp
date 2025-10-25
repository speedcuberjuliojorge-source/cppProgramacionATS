#include <iostream>
#include<conio.h>
using namespace std;

int main(){
	float temp1, temp2, temp3, temp4;
	cout<<"\t Bienvenido al calculador de temperaturas"<<endl;
	cout<<"Ingrese la temperatura tomada: ";cin>>temp1; 
	cout<<"Ingrese la temperatura tomada: ";cin>>temp2;
	cout<<"Ingrese la temperatura tomada: ";cin>>temp3;
	cout<<"Ingrese la temperatura tomada: ";cin>>temp4;
	float media=(temp1+temp2+temp3+temp4)/4;
	
	while(temp1>temp2 && temp1>temp3 && temp1>temp4){
		cout<<"La temperatura mayor es: "<<temp1;
		break;
	}
	while(temp2>temp1 && temp2>temp3 && temp2>temp4){
		cout<<"La temperatura mayor es: "<<temp2;
		break;
	}
	while(temp3>temp1 && temp3>temp2 && temp3>temp4){
		cout<<"La temperatura mayor es: "<<temp3;
		break;
	}
	while(temp4>temp1 && temp4>temp2 && temp4>temp3){
		cout<<"La temperatura mayor es: "<<temp4;
		break;
	}
	
	while(temp1<temp2 && temp1<temp3 && temp1<temp4){
		cout<<"\nLa temperatura menor es: "<<temp1;
		break;
	}
	while(temp2<temp1 && temp2<temp3 && temp2<temp4){
		cout<<"\nLa temperatura menor es: "<<temp2;
		break;
	}
	while(temp3<temp1 && temp3<temp2 && temp3<temp4){
		cout<<"\nLa temperatura menor es: "<<temp3;
		break;
	}
	while(temp4<temp1 && temp4<temp2 && temp4<temp3){
		
		cout<<"\nLa temperatura menor es: "<<temp4;
		break;
	}
	
	cout<<"\nLa temperatura media es: "<<media;
	
	
	
	getch();
	return 0;
}//int main()}
