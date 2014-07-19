#include <iostream.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include "3lab.h"
template <class T> class Vector{
private:
	T *data;     // указатель начала массива
	int size;		// размер

public:
	Vector(int);
	~Vector() { delete[] data; }
	int Size() { return size; }
	T& operator [](int i) { return data[i]; }
};
template <class T> Vector<T>::Vector(int n){
	data=new T[n];	size=n;
};//============================================
void main(){
	int i;
	Vector <Time> T(10);
	Time Summa(0,0,0);
	clrscr();
	 for(i=0;i<10;i++){
		 T[i]=Time(i,2*i+1,3*i+2);
	}
	for(i=0;i<10;i++) Print(T[i]);
	for(i=0;i<10;i++){
		 Summa=Summa+T[i];
	}
	cout<<"\n‘г¬¬  ўҐв®а®ў ўаҐ¬Ґ­Ё =>";Print(Summa);
	getch();
}