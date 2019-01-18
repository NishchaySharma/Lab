#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char a[]="This is CSE-BDA";
	fp=fopen("abc.txt","w");
	fseek(fp,10,SEEK_SET);	// SEEK_CUR and SEEK_END
	fputs("Compiler Lab",fp);
	getch();
}