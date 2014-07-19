#include <stdlib.h>      
#include <stdio.h>
#include <iostream.h>
#include <fstream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <DOS.h>
//-----------Classes
class point{
	 public:
		 int x,y,c;
	 public:
		 point(int xi, int yi, int ci);
		 point(const point& P);
		 int& GetX(void)	{return x;}
		 int& GetY(void)	{return y;}
		 int& GetC(void)	{return c;}
		 void SetXY(int xi,int yi){ x=xi;y=yi;}
		 void SetC(int ci){ c=ci;}	 
		 void Move(point& dP);
		 void Move(int dx, int dy);
		 void MoveTo(point& P);
		 void MoveTo(int xn, int yn);
		 point operator+ (point& P);
		 point operator- (point& P);
		 void Show(void);
		 void Hide();
};//----------------------------------------
//Реализация методов:
point::point(int xi=0, int yi=0, int ci=1) {x=xi; y=yi; c=ci;}
point::point(const point& P) {x=P.x; y=P.y;}
void point::Show(void){
		int  cc=getcolor();setcolor(c); 
		setfillstyle(1,c); fillellipse(x,y,2,2);
		setcolor(cc);setfillstyle(1,cc);
}
void point::Hide(void) {
		int c1=c; c=getbkcolor();
		Show(); setcolor(c=c1);
}
void point::Move(point& dP){
		Hide();x+=dP.x;  y+=dP.y; Show();
}
void point::Move(int dx, int dy){
		Hide();x+=dx;  y+=dy; Show();
}
void point::MoveTo(point& P){
		Hide();x=P.x;  y=P.y; Show();
}
void point::MoveTo(int xn, int yn){
		Hide();x=xn;  y=yn; 	Show();
}
point point::operator+ (point& P2){
		point P; P.x=x+P2.x;
		P.y=y+P2.y; P.c=c;
		return P;
}
point point::operator- (point& P2){
		point P; P.x=x-P2.x;
		P.y=y-P2.y; P.c=c;
		return P;
}