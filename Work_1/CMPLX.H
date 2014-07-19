#include <iostream.h>
#include <stdio.h>
#include <math.h>
class cmplx {
	double re,im;
public:
	cmplx (double r=0, double i=0)
	{re=r; im=i;}
	double GetRe(){return re;}
	double GetIm(){return im;}
	cmplx  operator -(){cmplx z; z.re=-this->re;
											z.im=-this->im; return z;}
	friend cmplx operator +(cmplx,cmplx);
	friend cmplx operator -(cmplx,cmplx);
	friend cmplx operator *(cmplx,cmplx);
	friend cmplx operator *(double,cmplx);
	friend cmplx operator /(cmplx,cmplx);
	cmplx sqrt(cmplx);
	void display(void){
		 cout << " ("<<re<<" , " << im<<")";
	}
};//===========================================
cmplx cmplx::sqrt(cmplx a1){
	double r=pow(a1.re*a1.re+a1.im*a1.im,0.5);
	double fi=atan(a1.im/a1.re);
	return cmplx(pow(r,0.5)*cos(fi/2),pow(r,0.5)*sin(fi/2));
}//-------------------------------------------
cmplx operator +(cmplx a1, cmplx a2){
	return cmplx(a1.re + a2.re,a1.im + a2.im);
}//-------------------------------------------
cmplx operator -(cmplx a1, cmplx a2){
	return cmplx(a1.re - a2.re,a1.im - a2.im);
}//-------------------------------------------
cmplx operator *(cmplx a1, cmplx a2){
	return cmplx(a1.re*a2.re -a1.im*a2.im,
		a1.re*a2.im + a1.im*a2.re);
}//-------------------------------------------
cmplx operator *(double z, cmplx a2){
	return cmplx(z*a2.re,z*a2.im);
}//-------------------------------------------
cmplx operator /(cmplx a1, cmplx a2){
	double r=a2.re, i=a2.im,ti,tr;
	tr=r < 0? -r:r;		ti=i < 0? -i:i;
	if(tr <=ti){
		ti=r/i;     tr=i*(1+ti*ti);
		r=a1.re;	i=a1.im;
	}
	else{
		ti=-i/r;	tr=r*(1+ti*ti);
		r=-a1.im;	i=a1.re;
	}
	return cmplx((r*ti+i)/tr,(i*ti-r)/tr);
}//-------------------------------------------
