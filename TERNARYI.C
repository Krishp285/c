#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	clrscr();
	printf("\nenter the number a =");
	scanf("%d",&a);
	printf("\nenter the number b =");
	scanf("%d",&b);
	printf("\nenter the number c =");
	scanf("%d",&c);
	if(a>b?a>c? printf("%d",a):printf("%d",c):b>c? printf("%d",b):printf("%d",c));
	getch();
}