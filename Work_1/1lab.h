#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>

class Time{
			 int day, hour,minute,second;
			 static int n;
			 public:
			 Time(){cout<<"\n��������� ��� ���ࠬ��஢ � "<<++n; }
			 Time(int h, int m, int s, int d=0){n++;      //���-����
					 cout <<"\nᮧ����� ��ꥪ� �"<<n;
					 day=d; hour=h; minute=m; second=s;}
			 Time(Time& t){n++;
			 day=t.day;hour=t.hour;minute=t.minute;second=t.second;
			 cout <<"\nᮧ����� ��ꥪ �"<<n;}
			 ~Time(){cout <<"\nࠧ��訫�� ��ꥪ� � "<<n--;}
			 long Interv(Time t1,Time t2);
			 Time Mom2(Time t1,long N);
			 void Input();
			 };//-----------------------------------

long Time::Interv(Time t1,Time t2){
		 long sec;
		 printf("�६� T1 = %i:%i:%i\n",t1.hour,t1.minute,t1.second);
		 printf("�६� T2 = %i:%i:%i\n",t2.hour,t2.minute,t2.second);
		 sec=t2.hour*3600+t2.minute*60+t2.second-t1.hour*3600-t1.minute*60-t1.second;
		 return sec;
		 }

Time Time::Mom2(Time t1,long N){ Time t2;
		 t2.day=N/86400;
		 t2.hour=(N-t2.day*86400)/3600;
		 t2.minute=(N-t2.day*86400-t2.hour*3600)/60;
		 t2.second=(N-t2.day*86400-t2.hour*3600-t2.minute*60);
		 t2.hour=t1.hour+t2.hour;
		 t2.minute=t1.minute+t2.minute;
		 t2.second=t1.second+t2.second;
		 if(t2.hour>=24) {t2.day=t2.day+t2.hour/24;t2.hour=t2.hour%24;}
		 if(t2.minute>=60) {t2.hour=t2.hour+t2.minute/60;t2.minute=t2.minute%60;}
		 if(t2.second>=60) {t2.minute=t2.minute+t2.second/60;t2.second=t2.second%60;}
		 printf("\n��諮 ���� = %i",t2.day);
		 printf("\n��砫쭮� �६� = %i:%i:%i",t1.hour,t1.minute,t1.second);
		 printf("\n�६� ��᫥ N ᥪ㭤 = ");
		 printf("%d:%d:%d",t2.hour,t2.minute,t2.second);
		 return t2;
		 }
		 void Time::Input(){
					cout<<"������ �६� t\n";
		 cin>>hour>>minute>>second;    //��� :
		 }
int Time::n=0;

