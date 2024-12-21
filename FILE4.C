#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp1,*fp2;
	char ch;
	clrscr();
	fp1=fopen("vowels.txt","w");// w write  r read a
	fp2=fopen("samplecon.txt","w");
	while((ch=getchar())!='\n'){
		if(ch=='a'||ch=='e' || ch=='i' || ch=='o' || ch=='u') {
			putc(ch,fp1);
		}
		else{
			putc(ch,fp2);
			}


	}
	fclose(fp1);
	fclose(fp2);
	printf("\nthe vowel is \n");
	fp1=fopen("vowels.txt","r");
	while((ch=getc(fp1))!=EOF)  {
		printf("%c",ch);
	}fclose(fp1);

	printf("\nthe consonant is \n");
	fp2=fopen("samplecon.txt","r");
	while((ch=getc(fp2))!=EOF)  {
		printf("%c",ch);
	}fclose(fp2);
	getch();
	}