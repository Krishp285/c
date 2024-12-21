#include<stdio.h>
#include<conio.h>
void main(){
	char c;
	int i;
	FILE *fp;
	clrscr();
	/*printf("\nenter name :-");
	gets(name);
	fp=fopen("batch1.txt","w+");
	for(i=0;name[i]='\0';i++)
	{
	 fputc(name[i],fp);
	}
	*/
	fp=fopen("batch1.txt","r");
	while((c=getc(fp))!=EOF)
	{
	    printf("\n%c--%d",c,c);
	}
	fclose(fp);
	}




}