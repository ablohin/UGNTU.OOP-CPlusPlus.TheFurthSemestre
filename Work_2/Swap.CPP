#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "STROKA.h"

void swap(stroka &a1, stroka &a2){
		 stroka buffer;
		 buffer=a1; a1=a2; a2=buffer;
}
void swap(char *s1,char *s2){
		 char *buffer;
		 strcpy(buffer,s1); strcpy(s1,s2); strcpy(s2,buffer);
}

void main(void){
	char f[10]="FJFJFJ",f2[10]="23232323";
	stroka LAT("___-------"),RUS("Пришел Увидел Победил !"),STR("23");
	clrscr();
	cout<<"\nобъект LAT сoдержит: ";LAT.display();
	cout<<"\nобъект RUS сoдержит: ";RUS.display();
	swap(LAT,RUS);
	cout<<"\nобъект LAT сoдержит: ";LAT.display();
	cout<<"\nобъект RUS сoдержит: "<<RUS.string();
	cout<<"\n";
	printf("\nобъект f сoдержит:%s",f);
	printf("\nобъект f2 сoдержит:%s",f2);
	swap(f,f2);
	printf("\nобъект f сoдержит:%s",f);
	printf("\nобъект f2 сoдержит:%s",f2);
	getchar();
}