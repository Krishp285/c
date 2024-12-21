#include<stdio.h>
#include<conio.h>
void main(){
	FILE*fp;
	char buff[50];
	clrscr();
	fp=fopen("list.txt","w+");
	fprintf(fp,"ROYALtechnosoft");
	fseek(fp,0,SEEK_SET);
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}

	printf("\n----------------------");

	fseek(fp,6,SEEK_SET);
	fprintf(fp,"TECHNOSOFT PVT LIMITED");
	fseek(fp,0,SEEK_SET);
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	fclose(fp);


	getch();
	}