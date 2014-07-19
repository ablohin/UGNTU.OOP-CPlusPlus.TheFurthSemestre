#ifndef ANIM
#define ANIM 1
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>    // уровни классификации животных по К.Линнею:
#include <string.h>  	 // класс:
#include <stdio.h>		 // отряд:
#include <conio.h>     // семейство:
class Animal{          // род:
	 protected:
			char Klass[30];
	 public:
			Animal(char *s=""){
					strcpy(Klass,"Животное ");strcat(Klass,s);
					cout<<"\nсоздано  "<<Klass;
			}
			virtual void WhoAreYou() { cout<<"Я "<<Klass; }
			virtual void Speak() /*=0;*/{ cout<<" Голоса нет"<<endl; }//=0; For virtual function
			virtual ~Animal(){cout<<"разрушено "<<Klass<<endl; }
};//------------------------------------------------------------------------
class Solipeds: public Animal{
	 protected:
			char Otrad[17], Name[10];
	 public:
			Solipeds(char *Nam=""):Animal(){
					strcpy(Otrad,"непарнокопытное ");
					strcpy(Name,Nam);
					cout<<" создан Solipeds: "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"Я "<<Klass;
					cout<<" из отряда "<<Otrad<<"зовут меня "<<Name; }
			virtual void  Speak( ){ cout<<"Брррр"<<endl;}
			~Solipeds(){ cout<<"разрушен Solipeds:"<<Name<<" "; }
};//------------------------------------------------------------------------
class Horse: public Solipeds{
			char Rod[15];
	 public:
			Horse(char *Nam=""):Solipeds(Nam){
					strcpy(Rod," Лошадь "); strcat(Klass,"");
					cout<<" создан Лощадь "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"Я "<<Klass <<" из отряда "<<
					Otrad <<"Род"<<Rod<<"зовут меня "<<Name; }
			virtual void  Speak( ){ cout<<" Гооо"<<endl;}
			~Horse(){	cout<<"разрушен Лошадь "<<Name<<" "; }
};//------------------------------------------------------------------------
class Zebra: public Solipeds{
			char Rod[15];
	 public:
			Zebra(char *Nam=""):Solipeds(Nam){
					strcpy(Rod," Зебра ");strcat(Klass,"");
					cout<<" создан Зебра "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"Я "<<Klass <<" из отряда "<<
					Otrad<<"Род"<<Rod<<"зовут меня "<<Name; }
			virtual void  Speak( ){ cout<<" вытссс"<<endl;}
			~Zebra(){	  cout<<"разрушен Зебра "<<Name<<" "; }
};//------------------------------------------------------------------------
class Donkey: public Solipeds{
			char Rod[15];
	 public:
			Donkey(char *Nam=""):Solipeds(Nam){
					strcpy(Rod," Осел "); strcat(Klass,"");
					cout<<" создан Осел "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"Я "<<Klass <<" из отряда "<<
					Otrad <<"Род"<<Rod<<"зовут меня "<<Name; }
			virtual void  Speak( ){ cout<<" иааааа"<<endl;}
			~Donkey(){	  cout<<"разрушен Осел "<<Name<<" "; }
};//------------------------------------------------------------------------
void Spravka1(Animal a){
		cout<<"мет. жив.:"; a.WhoAreYou();  a.Speak();
 }//-------------------------------

void Spravka2(Animal& A){
		A.WhoAreYou();  A.Speak();
 }//---------------------------------
void Spravka3(Animal *A){
		A->WhoAreYou();  A->Speak();
 }//---------------------------------
#endif