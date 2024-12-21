#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char ch;
	int len;

	clrscr();
	fp = fopen("list.txt","r");

	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}

	rewind(fp);
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	rewind(fp);
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}

	len = ftell(fp);

	printf("\nlist.txt file size is ; %d bytes",len);

	fclose(fp);
	getch();
	}