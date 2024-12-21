#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp1,*fp2;
	int no;
	clrscr();
	fp1=fopen("even.txt","w");// w write  r read a
	fp2=fopen("odd.txt","w");

	while((no=getchar())!='\n'){
		if(no%2==0) {
			putc(no,fp1);
		}
		else{
			putc(no,fp2);
			}
			}
	fclose(fp1);
	fclose(fp2);
	printf("\nthe even no is \n");
	fp1=fopen("even.txt","r");
	while((no=getc(fp1))!=EOF)  {
	printf(" %c \t",no);
	}fclose(fp1);
	printf("\nthe odd no is \n");
	fp2=fopen("odd.txt","r");
	while((no=getc(fp1))!=EOF)  {
	printf(" %c \t",no);
	}fclose(fp2);

	getch(); 	}