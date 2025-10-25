#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int c, a=1, examaprob, alumperf=0, alumaprob=0, ultexaprob=0;
	float calif;
	
	do{
		c=1;
		examaprob=0;
		do{
			cout<<"Ingrese la calificacion del examen "<<c<<" del alumno "<<a<<": ";
			cin>>calif;		
			c++;
			
			if(calif>5){
				examaprob++;}//if(calif>5)
				
			if((c==6) && (calif>=6)){
				ultexaprob++;
			}	
		}while(c<=5);//do while para 5 examanees
		
		if(examaprob==5){
			alumperf++;}
			
		if(examaprob>=1){
			alumaprob++;}
		a++;
	}while(a<=5);//do while para 5 alumnos
	
	
	
	
	
	cout<<"\n\tAlumnos que pasaron todos sus examenes: "<<alumperf<<endl;
	cout<<"\tAlumnos que pasaron al menos un examen: "<<alumaprob<<endl;
	cout<<"\tAlumnos que aprobaron el ultimo examen: "<<ultexaprob<<endl;
	
	getch();
	return 0;
}//int main()
