#include <conio.h>                  
#include <iostream.h>
#include "3lab.h"
template <class T>
void swap(T& a, T& b) { T c=a; a=b; b=c;}
//===================================================
void main(void){
	Time T1(3,45,13),T2(2,12,5);
	 cout<<"Время T1=>";T1.Print(T1);
	 cout<<"Время T2=>";T2.Print(T1);
	 getch(); swap(T1,T2);
	 cout<<"Время T1=>";T1.Print(T1);
	 cout<<"Время T2=>";T2.Print(T1);
	 getch();
}