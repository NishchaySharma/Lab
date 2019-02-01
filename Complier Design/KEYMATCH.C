#include<stdio.h>
#include<string.h>
int checkKey(char[]);
void main(){
	FILE *fread;
	char c,ch[100],*token,delimit[]=" \n\t";
	fread=fopen("add.txt","r");
	clrscr();
	printf("Your code is as follows:\n\n");
	while(!feof(fread)){
		c=fgetc(fread);
		printf("%c",c);
	}
	fseek(fread,0,SEEK_SET);
	while(!feof(fread)){
		fgets(ch,100,fread);
		token=strtok(ch,delimit);
		while(token!=NULL){
			if(checkKey(token))
				printf("%s is a keyword\n",token);
			token=strtok(ch,delimit);
		}
	}
	getch();
}
int checkKey(char ch[]){
																															
	int size=32,i;
	if(!strcmp(ch,"auto") || !strcmp(ch,"break") || !strcmp(ch,"case") || !strcmp(ch,"char") || !strcmp(ch,"const") || !strcmp(ch,"continue") || !strcmp(ch,"default") || !strcmp(ch,"do") || !strcmp(ch,"double") || !strcmp(ch,"else") || !strcmp(ch,"enum") || !strcmp(ch,"extern") || !strcmp(ch,"float") || !strcmp(ch,"for") || !strcmp(ch,"goto") || !strcmp(ch,"if") || !strcmp(ch,"int") || !strcmp(ch,"long") || !strcmp(ch,"register") || !strcmp(ch,"return") || !strcmp(ch,"struct") || !strcmp(ch,"switch") || !strcmp(ch,"typedef") || !strcmp(ch,"union") || !strcmp(ch,"unsigned") || !strcmp(ch,"void") || !strcmp(ch,"volatile") || !strcmp(ch,"while") || !strcmp(ch,"auto") || !strcmp(ch,"short") || !strcmp(ch,"signed") || !strcmp(ch,"short") || !strcmp(ch,"sizeof") || !strcmp(ch,"static"))
			return 1;
	return 0;
}