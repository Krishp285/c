#include<stdio.h>
#include<conio.h>
void main(){
	char name[30];
	char str[30];
	FILE *fp1;
	FILE *fp3;
	FILE *fp2;
	FILE *fp5;
	FILE *fp4;
	clrscr();
	printf("\nenter the string");
	scanf("%s",str);
	fp1=fopen("b.txt","w");// w write  r read a
	fprintf(fp1,"%s",str);
	fclose(fp1);
	fp1=fopen("b.txt","r");// w write  r read a
	fscanf(fp1,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp1);
	printf("\nenter the string");
	scanf("%s",str);
	fp2=fopen("b.txt","w");// w write  r read a
	fprintf(fp2,"%s",str);
	fclose(fp2);
	fp2=fopen("b.txt","r");// w write  r read a
	fscanf(fp2,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp2);
	printf("\nenter the string");
	scanf("%s",str);
	fp3=fopen("b.txt","w");// w write  r read a
	fprintf(fp3,"%s",str);
	fclose(fp3);
	fp3=fopen("b.txt","r");// w write  r read a
	fscanf(fp3,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp3);
	printf("\nenter the string");
	scanf("%s",str);
	fp4=fopen("b.txt","w");// w write  r read a
	fprintf(fp4,"%s",str);
	fclose(fp4);
	fp4=fopen("b.txt","r");// w write  r read a
	fscanf(fp4,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp4);
	printf("\nenter the string");
	scanf("%s",str);
	fp5=fopen("b.txt","w");// w write  r read a
	fprintf(fp5,"%s",str);
	fclose(fp5);
	fp5=fopen("b.txt","r");// w write  r read a
	fscanf(fp5,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp5);
	getch();
	}