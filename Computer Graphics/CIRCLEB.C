#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm;
	int r,x,y,p,xc,yc;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("Enter the radius ");
	printf("Enter coordinates of center: ");
	scanf("%d %d",&xc,&yc);
	scanf("%d",&r);
	x=0;
	y=r;
	putpixel(xc+x,yc-y,1);
	p=3-(2*r);
	for(x=0;x<=y;x++)
	{
		if(p<0)
		{
			y=y;
			p=(p+(4*x)+6);
		}
		else
		{
			y=y-1;

			p=p+((4*(x-y)+10));
		}
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		delay(20);
	}
	getch();
	closegraph();
}