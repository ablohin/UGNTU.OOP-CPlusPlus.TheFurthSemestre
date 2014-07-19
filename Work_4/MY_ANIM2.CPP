#include "MY_ANIM.h" // Упражнение 3 - позднее(динамич.) связ. вирт. методов
void main(void){     // Животные - непарнокопытные: лошади,зебры,ослы
	clrscr();
	Animal A(" неизвестное "), *pA;
	Solipeds S("Энигма "), *pS;
	Horse H("Эзалор"), H2("Олень"), *pH;
	cout<<"\n\n\tраннее связывание Spravka1(Animal) работают методы Animal";
	cout<<"\n A=H; Spravka1(A): "; Spravka1(A);
	cout<<" S=H2; Spravka1(S)  "; Spravka1(S);
	getch();clrscr();
	cout<<"\n\tпозднее связывание виртуальных методов по";
	cout<<"\n\tуказателю базового класса Animal *pA\n";
	pA=&H; cout<<"\npA=&H; Spravka3(pA) "; Spravka3(pA);
	cout<<"pA=&H; pA->WhoAreYou() "; pA->WhoAreYou();
	cout<<"\nЧерез указатель на базовый класс автоматически вызывается";
	cout<<"\nнужный виртуальный метод по адресу производного объекта";
	getchar();clrscr();
	cout<<"\n\tПозднее связывание виртуальных методов по";
	cout<<"\n\tссылке базового класса Animal& refA";
	cout<<"\n\tчерез параметр функции Spravka2(Animal& a)\n";
	cout<<"\nSpravka2(H2)"; Spravka2(H2);
	cout<<"Spravka2(S)"; Spravka2(S);
	Animal& refA=H2;
	cout<<"refA=H2; refA.WhoAreYou() refA.Speak()\n"; refA.WhoAreYou();
	refA.Speak();
	cout<<"Spravka2(ref) по ссылке "; Spravka2(refA);
	cout<<"\nПо ссылке базового класса Animal& refA для производного объекта";
	cout<<"\nтакже автоматически находится нужный виртуальный метод ";
	cout<<"\nи связывается с объектом";
	getchar();
}
