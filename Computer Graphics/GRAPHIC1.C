#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TURBOC3/BGI");
	putpixel(320,200,WHITE);
	getch();
}