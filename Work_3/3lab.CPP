#include<iostream.h>
#include "3lab.h"

void main(void){
		 clrscr();
		 long V,S,H;Time t1,t2,t3,t4,t5,t6,t7,t8;
		 cout<<"\n�஢�ઠ ��ॣ�㪨 㭠୮� ����樨 ++:";
		 cout<<"\n���᪠��� �६� ������� �१ �����稥 (:)!!!";
		 cout<<"\n������ �६� t1 =>";
		 cin>>t1;
		 cout<<"\n������� �ਡ���� 1 ᥪ � ������� ++,�.�. t1++";
		 t1++;
		 cout<<"\n�������:";
		 cout<<t1;
		 getch();
		 clrscr();
		 cout<<"\n�஢�ઠ ��ॣ�㪨 㭠୮� ����樨 --:";
		 cout<<"\n���᪠��� �६� ������� �१ �����稥 (:)!!!";
		 cout<<"\n������ �६� t2 =>";
		 cin>>t2;
		 cout<<"\n������� �⡠��� 1 ᥪ � ������� --,�.�. t2--";
		 t2--;
		 cout<<"\n�������:";
		 cout<<t2;
		 getch();
		 clrscr();
		 cout<<"\n�஢�ઠ ��ॣ�㪨 ����୮� ����樨 +:";
		 cout<<"\n���᪠��� �६� ������� �१ �����稥 (:)!!!";
		 cout<<"\n������ �६� t3 =>";
		 cin>>t3;
		 cout<<"\n������ �६� t4 =>";
		 cin>>t4;
		 cout<<"\n������� t5=t3+t4 c ������� + ⨯�� Time + Time";
		 t5=t3+t4;
		 cout<<"\n�������:";
		 cout<<t5;
		 getch();
		 clrscr();
		 cout<<"\n�஢�ઠ ��ॣ�㪨 ����୮� ����樨 -:";
		 cout<<"\n���᪠��� �६� ������� �१ �����稥 (:)!!!";
		 cout<<"\n������ �६� t6 =>";
		 cin>>t6;
		 cout<<"\n������ �६� t7 =>";
		 cin>>t7;
		 cout<<"\n������� t8=t6-t7 c ������� - ⨯�� Time - Time";
		 t8=t6-t7;
		 cout<<"\n�������:";
		 cout<<t8;
		 getch();
		 clrscr();
		 cout<<"�஢�ન �����襭�!!!�த�����!!!";
		 cout<<"\n�롥�� �� ��� ������:";
		 cout<<"\n1-���ࢠ� ����� t1 � t2!";
		 cout<<"\n2-�६� �१ �१ N ᥪ㭤!\n";
		 cin>>V;
		 if (V==1){
		 cout<<"\n������ �६� t1 =>";
		 cin>>t1;
		 cout<<"\n������ �६� t2 =>";
		 cin>>t2;
		 H=Interv(t1,t2);
		 cout<<"\n�६� �㦤� t1 � t2 ࠢ��:";
		 printf("%d",H);
		 }
				else {
							cout<<"������ �६� N=";
							cin>>S;
							Mom2(t1,S);
				}
		getch();getch();
}