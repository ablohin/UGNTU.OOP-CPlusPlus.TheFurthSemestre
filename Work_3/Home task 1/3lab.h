#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdlib.h>
static int n=1;
class Time{
			 public:
			 int hour,minute,second;
			 public:
			 Time(){}
			 Time(int h, int m, int s){hour=h; minute=m; second=s;}
			 Time(Time& t){hour=t.hour;minute=t.minute;second=t.second;}
			 ~Time(){}
			 friend long Interv(Time t1,Time t2);
			 friend Time Mom2(Time t1,long N);
			 friend void Input(Time *t1);
			 friend void Print(Time *t2);
			 friend ostream& operator<<(ostream& out,Time& p);
			 friend istream& operator>>(istream& in,Time& p);
			 Time& operator ++(){
					++second;
					if(this->second ==60) {this->minute+=1;this->second=0;}
					if(this->minute ==60) {this->hour+=1;this->minute=0;}
					if(this->hour ==24) {this->hour=0;}
			 return *this;
			 }

			 Time& operator --(){
					--second;
					if(this->second ==-1) {this->minute-=1;this->second=59;}
					if(this->minute ==-1) {this->hour-=1;this->minute=59;}
					if(this->hour ==-1) {this->hour=23;}
			 return *this;
			 }

			 Time operator +(Time &t1){
					Time t2;
					t2.hour=this->hour+t1.hour;
					t2.minute=this->minute+t1.minute;
					t2.second=this->second+t1.second;
					if(t2.second >=60) {t2.minute+=1;t2.second=t2.second%60;}
					if(t2.minute >=60) {t2.hour+=1;t2.minute=t2.minute%60;}
					if(t2.hour >=24) {t2.hour=t2.hour%24;}
			 return t2;
			 }

			 Time operator -(Time &t1){
					Time t2;
					t2.hour=this->hour - t1.hour;
					t2.minute=this->minute - t1.minute;
					t2.second=this->second - t1.second;
					if(t2.second <0) {t2.minute-=1;t2.second=60+t2.second;}
					if(t2.minute <0) {t2.hour-=1;t2.minute=60+t2.minute;}
					if(t2.hour <0) {t2.hour=24+t2.hour;}
			 return t2;
			 }

			 Time operator +(int &t1){
					Time t2;
					t2.hour=this->hour;
					t2.minute=this->minute;
					t2.second=this->second+t1;
					if(t2.second>=60){t2.minute+=t2.second/60;t2.second=t2.second%60;}
					if(t2.minute>=60){t2.hour+=t2.minute/60;t2.minute=t2.minute%60;}
					if(t2.hour>=24){t2.hour=t2.hour%24;}
			 return t2;
			 }

			Time operator -(int &t1){
				 Time t2;
				 t2.hour=this->hour;
				 t2.minute=this->minute;
				 t2.second=this->second-t1;
				 if(t2.second<0){t2.minute+=t2.second/60-1;t2.second=60+t2.second%60;}
				 if(t2.minute<0){t2.hour+=t2.minute/60-1;t2.minute=60+t2.minute%60;}
				 if(t2.hour<0){t2.hour=24+t2.hour%24;}
				 if(t2.second ==60) {t2.minute+=1;t2.second=0;}
				 if(t2.minute ==60) {t2.hour+=1;t2.minute=0;}
				 if(t2.hour ==24) {t2.hour=0;}
			return t2;
			}
};//-------------------------------------------------------------------------

long Interv(Time t1,Time t2){
		 long sec;
		 printf("Время T1 = %i:%i:%i\n",t1.hour,t1.minute,t1.second);
		 printf("Время T2 = %i:%i:%i\n",t2.hour,t2.minute,t2.second);
		 sec=t2.hour*3600+t2.minute*60+t2.second-t1.hour*3600-t1.minute*60-t1.second;
		 return sec;
}

Time Mom2(Time t1,long N){
		 int day=N/86400;Time t2;
		 t2.hour=(N-day*86400)/3600;
		 t2.minute=(N-day*86400-t2.hour*3600)/60;
		 t2.second=(N-day*86400-t2.hour*3600-t2.minute*60);
		 t2.hour=t1.hour+t2.hour;
		 t2.minute=t1.minute+t2.minute;
		 t2.second=t1.second+t2.second;
		 if(t2.hour>=24) {day=day+t2.hour/24;t2.hour=t2.hour%24;}
		 if(t2.minute>=60) {t2.hour=t2.hour+t2.minute/60;t2.minute=t2.minute%60;}
		 if(t2.second>=60) {t2.minute=t2.minute+t2.second/60;t2.second=t2.second%60;}
		 printf("Прошло дней = %d",day);
		 printf("\nНачальное время = %i:%i:%i",t1.hour,t1.minute,t1.second);
		 printf("\nВремя после N секунд = ");
		 printf("%d:%d:%d",t2.hour,t2.minute,t2.second);
		 }

void Input(Time& t1){
		 cout<<"Введите время t\n";
		 cin>>t1.hour>>t1.minute>>t1.second;
}

void Print(Time& t2){
		 cout<<"\nВремя: "<<t2.hour<<":"<<t2.minute<<":"<<t2.second;
}

ostream& operator<<(ostream& out,Time& p){

		printf("\nВремя t%d =",n);
		out<<p.hour<<":"<<p.minute<<":"<<p.second;
		return out;
}

istream& operator>>(istream& in,Time& p){
		float h,m,s;char ch1,ch2;n++;
		in>>h>>ch1>>m>>ch2>>s;
		p.hour=h;
		p.minute=m;
		p.second=s;
		return in;
}