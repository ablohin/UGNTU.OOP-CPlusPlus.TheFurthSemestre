#include "MY_ANIM.h" // ��ࠦ����� 3 - �������(�������.) ��. ����. ��⮤��
void main(void){     // ������ - ����୮������: ��蠤�,�����,���
	clrscr();
	Animal A(" �������⭮� "), *pA;
	Solipeds S("������ "), *pS;
	Horse H("������"), H2("�����"), *pH;
	cout<<"\n\n\t࠭��� ��뢠��� Spravka1(Animal) ࠡ���� ��⮤� Animal";
	cout<<"\n A=H; Spravka1(A): "; Spravka1(A);
	cout<<" S=H2; Spravka1(S)  "; Spravka1(S);
	getch();clrscr();
	cout<<"\n\t������� ��뢠��� ����㠫��� ��⮤�� ��";
	cout<<"\n\t㪠��⥫� �������� ����� Animal *pA\n";
	pA=&H; cout<<"\npA=&H; Spravka3(pA) "; Spravka3(pA);
	cout<<"pA=&H; pA->WhoAreYou() "; pA->WhoAreYou();
	cout<<"\n��१ 㪠��⥫� �� ������ ����� ��⮬���᪨ ��뢠����";
	cout<<"\n�㦭� ����㠫�� ��⮤ �� ����� �ந�������� ��ꥪ�";
	getchar();clrscr();
	cout<<"\n\t������� ��뢠��� ����㠫��� ��⮤�� ��";
	cout<<"\n\t��뫪� �������� ����� Animal& refA";
	cout<<"\n\t�१ ��ࠬ��� �㭪樨 Spravka2(Animal& a)\n";
	cout<<"\nSpravka2(H2)"; Spravka2(H2);
	cout<<"Spravka2(S)"; Spravka2(S);
	Animal& refA=H2;
	cout<<"refA=H2; refA.WhoAreYou() refA.Speak()\n"; refA.WhoAreYou();
	refA.Speak();
	cout<<"Spravka2(ref) �� ��뫪� "; Spravka2(refA);
	cout<<"\n�� ��뫪� �������� ����� Animal& refA ��� �ந�������� ��ꥪ�";
	cout<<"\n⠪�� ��⮬���᪨ ��室���� �㦭� ����㠫�� ��⮤ ";
	cout<<"\n� ��뢠���� � ��ꥪ⮬";
	getchar();
}
