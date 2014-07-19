#include <stdio.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>
class power{
public:
	float re;
public: power (float r=0){re=r;}
	 friend	 power  operator ^ (power, double);
	 void display(void){
		 cout <<re;
	}
};//============================================

power operator ^(power a1,double a2){
	return power(pow(a1.re,a2));
}//---------------------------------------------

void main(void){
clrscr();
power X,A;double B;
cout << "Введите число: "; cin >> A.re;
cout << "Введите степень в которую его возвести: "; cin >> B;
X=A^B;
cout << "Результат возведения в степень: "; X.display();
getchar();
}
