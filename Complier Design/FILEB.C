#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char ch;
	fp=fopen("abc.txt","r");
	clrscr();
	while(ch!=EOF){
		ch=fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	getch();
}
