#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, i,suma=0;
	
	cout<<"Digite un numero: "; cin>>n;
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			i*=-1;
		}
		
		suma+=i;
		
		if(i%2==0){
			i*=-1;
		}
	}
	
	cout<<suma;
	
	
	
	getch();
	return 0;
}
