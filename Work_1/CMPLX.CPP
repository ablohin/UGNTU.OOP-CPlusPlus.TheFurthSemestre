#include "cmplx.h"
#include <conio.h>
#include <stdio.h>
void main(void){
	clrscr();
	cmplx Z,X1,X2,Diskreminant;
	cmplx A(2,3),B(0.5,1),C(1,2),D(2,5),G;
	cout<<"A=";A.display();
	cout<<"B=";B.display();
	cout<<"C=";C.display();
	cout<<"D=";D.display();
	Z=A/B+B/D;
	cout<<"\nZ=A/B+B/D=";Z.display();
	//Z=A*X*X+B*X+C
	cout<<"\nРешение квадратного уравнения:A*X*X+B*X+C=0";
	Diskreminant=B*B-4*A*C;
	X1=(-B+G.sqrt(Diskreminant))/(2*A);
	X2=(-B-G.sqrt(Diskreminant))/(2*A);
	cout<<"\nDiskreminant=";Diskreminant.display();
	cout<<"\nX1=";X1.display();
	cout<<"\nX2=";X2.display();
	cout<<"\nПроверка по теореме ВИЕТТА:";
	G=-A*(X1+X2);
	cout<<"\nB=-A*(X1+X2)=";G.display();
	G=A*X1*X2;
	cout<<"\nC=-A*X1*X2=";G.display();
	getchar();
}