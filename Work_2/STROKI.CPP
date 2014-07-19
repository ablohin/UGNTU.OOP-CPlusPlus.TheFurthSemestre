#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "STROKA1.h"

void main(){
	clrscr();
	stroka s1("qwerty"),s2("qdegtl"),s3;
	s3=s1-s2;
	s1.display();
	s2.display();
	s3.display();
	getchar();
}