#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	double x=0, y=0, u, i=2;
	
	do{
	cout<<"Ingrese un valor para'x': "; cin>>x;
	  }while(x<=0);
	  
	do{
	cout<<"Ingrese un valor para'y': "; cin>>y;
	  }while(y<=0);
	 
	 
	u=x*x;
	do{
		
		u=u*x;
		i++;
	}while(i<y);
	cout<<"\n\tEl resultado es "<<u<<endl;

	
	
	
	
	system("pause");
	return 0;
}
