#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, i, rdc, x=0, sum;
	
	
	cout<<"Digite un numero: ";cin>>num;
	
	for(i=1; i<=num;i++){
		rdc=(2*i)-1;
		sum+=rdc;
		x=rdc;
	}
	cout<<sum-1;
	getch();
}
