#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	float multiplicacion[]={3.14, 2.71, 8.53},resultado=1;
	
	
	
	for(int i=0;i<3;i++){
		resultado*=multiplicacion[i];
	}
	cout<<resultado<<endl;
	
	system("PAUSE");
	return 0;
}
