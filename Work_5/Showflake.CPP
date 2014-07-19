#include "Point.h" 
#define ESC					27
#define MOUSE1			1
#define MOUSE2      2

class Snowflake:public point{ //ъырёё Snowflake эрёыхфєхЄё  юЄ point
	float r;
	public:
	Snowflake(float R,int X,int Y){r=R; x=X; y=Y; cout<<"R= "<<R;}
	void show(){
	float x0,x1,x11,x12,x13,x2,x3,y0,y1,y11,y12,y13,y2,y3;int i,j;
	float gr60=M_PI/3; float gr120=M_PI*2/3;
	setlinestyle(0,0,3);
	for(i=1;i<7;i++){
	x0=x+r*cos(i*gr60); y0=y-r*sin(i*gr60);
	line(x,y,x0,y0);
	x11=x+(x0-x)/4; y11=y+(y0-y)/4;
	x12=x+(x0-x)/2; y12=y+(y0-y)/2;
	x13=x+3*(x0-x)/4;y13=y+3*(y0-y)/4;
	if(i%2==0){
			for(j=1;j<4;j++){
			x1=x11-r/6*cos(2*j*gr120); y1=y11-r/6*sin(2*j*gr120);
			x2=x12-r/4*cos(2*j*gr120); y2=y12-r/4*sin(2*j*gr120);
			x3=x13-r/6*cos(2*j*gr120); y3=y13-r/6*sin(2*j*gr120);
			line(x11,y11,x1,y1);
			line(x12,y12,x2,y2);
			line(x13,y13,x3,y3);
			}
	}
	if(i%2==1){
			for(j=1;j<4;j++){
			x1=x11+r/6*cos(2*j*gr120); y1=y11-r/6*sin(2*j*gr120);
			x2=x12+r/4*cos(2*j*gr120); y2=y12-r/4*sin(2*j*gr120);
			x3=x13+r/6*cos(2*j*gr120); y3=y13-r/6*sin(2*j*gr120);
			line(x11,y11,x1,y1);
			line(x12,y12,x2,y2);
			line(x13,y13,x3,y3);
			}
	}
	}
}
	void hide(void){
	int c1=c; c=getbkcolor(); setcolor(c);
	show(); setcolor(c=c1);
	}
	~Snowflake(){}
};//----------------------------------
void main(){
	int gd= DETECT, gm, errcod;
	Snowflake sneg1(40,200,200);
	int shag=0;
	initgraph(&gd, &gm, "");
	errcod = graphresult();
	if (errcod != grOk) {
		printf("Не могу найти EGAVGA.BGI: %s\n", grapherrormsg(errcod));
		printf("\nНажмите любую клавишу");	getch();	exit(1);
 }
int m=0;
		cout<<"Управление:";
		cout<<"Для выхода из программы жмите Левую и Правую клавиши мыши\n";
		cout<<"Для демонстрации полета снежинки жмите Левую клавишу мыши\n";
		cout<<"Для вылета снежинки из указанного места жмите правую кл мыши";
while (m!=3)
	{	_AX=3;geninterrupt(0x33);
		m=_BL;
		switch (m)
		{
		case MOUSE1:
			setcolor(BLUE);
			shag=sneg1.y+5;
			while(shag!=getmaxy()){
			sneg1.show();delay(75);
			sneg1.hide();
			sneg1.x=sneg1.x+30*sin(6*shag);sneg1.y=sneg1.y+1;
			shag++;_AX=3;geninterrupt(0x33);m=_BL;
			if(m==3) shag=getmaxy();}
			break;
		case MOUSE2:
			int button=0;
			while(button!=1){
				_AX=1;geninterrupt(0x33);
				_AX=3;geninterrupt(0x33);
				int X,Y;
				X=_CX;
				Y=_DX;
				gotoxy(1,1);
				sneg1.x=X;sneg1.y=Y;
				button=_BL;
			}
			break;
		}
	}
 closegraph();
}//==========================================