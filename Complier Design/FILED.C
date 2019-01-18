#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	long int size;
	FILE *fp;
	size=ftell(fp);
	fp=fopen("abc.txt","r");
	printf("Content of the file is as follows: \n");
	while(ch!=EOF){
		printf("%c",ch);
		ch=fgetc(fp);
	}
	printf("\n\nSize of file is %ld",size);
	getch();
}
