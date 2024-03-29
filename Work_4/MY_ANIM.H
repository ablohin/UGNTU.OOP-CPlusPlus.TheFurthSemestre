#ifndef ANIM
#define ANIM 1
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>    // �஢�� �����䨪�樨 ������� �� �.������:
#include <string.h>  	 // �����:
#include <stdio.h>		 // ����:
#include <conio.h>     // ᥬ���⢮:
class Animal{          // த:
	 protected:
			char Klass[30];
	 public:
			Animal(char *s=""){
					strcpy(Klass,"����⭮� ");strcat(Klass,s);
					cout<<"\nᮧ����  "<<Klass;
			}
			virtual void WhoAreYou() { cout<<"� "<<Klass; }
			virtual void Speak() /*=0;*/{ cout<<" ����� ���"<<endl; }//=0; For virtual function
			virtual ~Animal(){cout<<"ࠧ��襭� "<<Klass<<endl; }
};//------------------------------------------------------------------------
class Solipeds: public Animal{
	 protected:
			char Otrad[17], Name[10];
	 public:
			Solipeds(char *Nam=""):Animal(){
					strcpy(Otrad,"����୮����⭮� ");
					strcpy(Name,Nam);
					cout<<" ᮧ��� Solipeds: "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"� "<<Klass;
					cout<<" �� ���鸞 "<<Otrad<<"����� ���� "<<Name; }
			virtual void  Speak( ){ cout<<"�����"<<endl;}
			~Solipeds(){ cout<<"ࠧ��襭 Solipeds:"<<Name<<" "; }
};//------------------------------------------------------------------------
class Horse: public Solipeds{
			char Rod[15];
	 public:
			Horse(char *Nam=""):Solipeds(Nam){
					strcpy(Rod," ��蠤� "); strcat(Klass,"");
					cout<<" ᮧ��� ��頤� "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"� "<<Klass <<" �� ���鸞 "<<
					Otrad <<"���"<<Rod<<"����� ���� "<<Name; }
			virtual void  Speak( ){ cout<<" ����"<<endl;}
			~Horse(){	cout<<"ࠧ��襭 ��蠤� "<<Name<<" "; }
};//------------------------------------------------------------------------
class Zebra: public Solipeds{
			char Rod[15];
	 public:
			Zebra(char *Nam=""):Solipeds(Nam){
					strcpy(Rod," ���� ");strcat(Klass,"");
					cout<<" ᮧ��� ���� "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"� "<<Klass <<" �� ���鸞 "<<
					Otrad<<"���"<<Rod<<"����� ���� "<<Name; }
			virtual void  Speak( ){ cout<<" ������"<<endl;}
			~Zebra(){	  cout<<"ࠧ��襭 ���� "<<Name<<" "; }
};//------------------------------------------------------------------------
class Donkey: public Solipeds{
			char Rod[15];
	 public:
			Donkey(char *Nam=""):Solipeds(Nam){
					strcpy(Rod," �ᥫ "); strcat(Klass,"");
					cout<<" ᮧ��� �ᥫ "<<Name;
			}
			virtual void WhoAreYou( ){ cout<<"� "<<Klass <<" �� ���鸞 "<<
					Otrad <<"���"<<Rod<<"����� ���� "<<Name; }
			virtual void  Speak( ){ cout<<" ������"<<endl;}
			~Donkey(){	  cout<<"ࠧ��襭 �ᥫ "<<Name<<" "; }
};//------------------------------------------------------------------------
void Spravka1(Animal a){
		cout<<"���. ���.:"; a.WhoAreYou();  a.Speak();
 }//-------------------------------

void Spravka2(Animal& A){
		A.WhoAreYou();  A.Speak();
 }//---------------------------------
void Spravka3(Animal *A){
		A->WhoAreYou();  A->Speak();
 }//---------------------------------
#endif