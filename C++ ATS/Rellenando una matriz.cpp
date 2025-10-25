#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char matriz[3][3]={{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
	
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			if(f==c){
				cout<<matriz[f][c]<<"\t";
			}
		}
	}
	
	getch();
	return 0;
}
