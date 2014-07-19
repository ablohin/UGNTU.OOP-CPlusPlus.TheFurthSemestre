#include <iostream.h>
#include <string.h>
class stroka{
	 char *ch;
	 int len;
	 public:
		 stroka(int N=80): // konstruktor 1
			 len(0)
			 {ch=new char[N+1];ch[0]='\0';}
		 stroka(stroka &R){len=R.len;ch=R.ch;}
		 stroka(const char *s){
			 len=strlen(s); ch=new char[len+1];
			 strcpy(ch,s);
			 }
		 int &len_str(void) {return len;}
		 char *string(void) {return ch;}
		 void display(void){
				cout <<"\nдлина строки:"<<len
						 <<" ее содержимое -  "<<ch;}
		 ~stroka() {delete [] ch;}
};

