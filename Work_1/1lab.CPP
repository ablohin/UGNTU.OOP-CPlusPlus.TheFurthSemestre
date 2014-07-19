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
		 Time t4=Time(t3); //копия
		 cout<<"\nВыберите что хотите делать:";
		 cout<<"\n1-интервал между t1 и t2!";
		 cout<<"\n2-время через через N секунд!\n";
		 cin>>V;
		 if (V==1){
		 H=t3.Interv(t1,t2);
		 cout<<"\nВремя мужду t1 и t2 равно:";
		 printf("%d",H);
		 }
				else {
							cout<<"Введите время N=";
							cin>>S;
							t2.Mom2(t1,S);
				}
}
