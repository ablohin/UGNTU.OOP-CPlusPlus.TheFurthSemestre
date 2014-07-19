#include <iostream.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
class  stroka{
		public:
		char *ch;
		int len;
		public:
		stroka(int n=80): // konstruktor 1
		len(0)
		{ch=new char[n+1];ch[0]='\0';}
		stroka(stroka &r){len=r.len;ch=r.ch;}
		stroka(const char *s){
			len=strlen(s);ch=new char[len+1];strcpy(ch,s);
			}
		int &len_str(void) {return len;}
		char *string(void) {return ch;}
		stroka& operator -(stroka &s2);
		void display(void){
		cout <<"\n Длина слова: " << len <<" Слово: "<<ch;}
		~stroka() {delete [] ch;}
};
stroka& stroka::operator -(stroka &s2){
				int i,j,l,k;int p;
				stroka *s1;p=this->len_str();
				s1=new stroka (this->len);
				strcpy(s1->ch,this->ch);
				s1->len_str()=p;
				for(i=0;i<s2.len;i++){
					k=0;for(j=0;j<s1->len_str();j++){
								if((s2.ch[i]==s1->ch[j])&&(k==0)){
								k++;for(l=j;l<s1->len-1;l++){
											s1->ch[l]=s1->ch[l+1];
										}
								s1->len=s1->len-1;
								}
							}
				}
				s1->ch[s1->len]='\0';
				return *s1;
};