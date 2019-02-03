#include<graphics.h>
#include<conio.h>
void main(){
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"C://TURBOC3/BGI");
	for(i=0;i<50;i++){
		putpixel(295+i,100,WHITE);
		putpixel(295+i,200,WHITE);
	}
	for(i=101;i<201;i++)
		putpixel(320,i,WHITE);
	getch();
	closegraph();
}