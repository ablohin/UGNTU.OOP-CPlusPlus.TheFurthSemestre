#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#include "1lab.H"

void main(void){
		 clrscr();
		 long V,S,H;
		 Time t1,t2,t3(1,20,10);
		 cout<<"\n";
		 t1.Input();
		 t2.Input();
		 Time t4=Time(t3); //�����
		 cout<<"\n�롥�� �� ��� ������:";
		 cout<<"\n1-���ࢠ� ����� t1 � t2!";
		 cout<<"\n2-�६� �१ �१ N ᥪ㭤!\n";
		 cin>>V;
		 if (V==1){
		 H=t3.Interv(t1,t2);
		 cout<<"\n�६� �㦤� t1 � t2 ࠢ��:";
		 printf("%d",H);
		 }
				else {
							cout<<"������ �६� N=";
							cin>>S;
							t2.Mom2(t1,S);
				}
}
