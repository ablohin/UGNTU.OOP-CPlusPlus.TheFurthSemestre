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
	stroka LAT("___-------"),RUS("��襫 ������ ������� !"),STR("23");
	clrscr();
	cout<<"\n��ꥪ� LAT �o��ন�: ";LAT.display();
	cout<<"\n��ꥪ� RUS �o��ন�: ";RUS.display();
	swap(LAT,RUS);
	cout<<"\n��ꥪ� LAT �o��ন�: ";LAT.display();
	cout<<"\n��ꥪ� RUS �o��ন�: "<<RUS.string();
	cout<<"\n";
	printf("\n��ꥪ� f �o��ন�:%s",f);
	printf("\n��ꥪ� f2 �o��ন�:%s",f2);
	swap(f,f2);
	printf("\n��ꥪ� f �o��ন�:%s",f);
	printf("\n��ꥪ� f2 �o��ন�:%s",f2);
	getchar();
}