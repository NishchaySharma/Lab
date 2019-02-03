#include<graphics.h>
void main(){
	int gd=DETECT,gm;
	int x1,x2,y1,y2,dx,dy,i,step;
	float xinc,yinc,xs,ys;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	printf("Enter x1 y1: ");
	scanf("%d %d",&x1,&y1);
	printf("Enter x2 y2: ");
	scanf("%d %d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	xs=x1,ys=y1;
	step=(abs(dx)>abs(dy))?abs(dx):abs(dy);
	xinc=(float)dx/step;
	yinc=(float)dy/step;
	for(i=0;i<step;i++){
		putpixel((int)xs,(int)ys,WHITE);
		xs+=xinc;
		ys+=yinc;
	}
	getch();
	closegraph();
}