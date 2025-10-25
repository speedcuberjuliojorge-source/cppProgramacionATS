#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int num, cont, division;
	
		//NUMERO ALEATORIO (1-100)
		srand(time(NULL));
		num = 1+rand()%(100);cout<<"\t"<<num<<endl;
		
		//NUMEROS PRIMOS
		for(int i=2;i<=num;i++){
			cont=0;
			for(int c=2;c<=num;c++){
				if(i%c==0){
					cont++;
				}
			}
			while((cont==1)&&(num%i==0)){
				cout<<i<<"*";
				num/=i;
			}
		}
		cout<<"1"<<endl;

	
	
	
	
	system("PAUSE");
	return 0;
}
