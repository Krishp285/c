#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp1,*fp2;
	char ch[10];
	int c;
	clrscr();
	printf("\nenter text :");
	scanf("%s",ch);
	fp1 = fopen("college.txt","r");
	fp2 = fopen("college2.txt","w");
	if(fp1 == NULL)
	{
	printf("file is empty");
	}
	printf("file created ");

	fputs(ch,fp1);

	while(1)
	{
		c = fgetc(fp1);

		if(ch==EOF)
		{
		break;
		}
		else
		{
		fputc(c,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	getch();
	}