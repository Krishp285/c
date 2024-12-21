#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	int a[10],c[10],b[10];
	int *x,*y,*z;
	clrscr();
	x=a;
	y=b;
	z=c;
	for(i=0;i<10;i++){
		printf("\nenter the value");
		scanf("%d",x+i);
		}
		for(i=0;i<10;i++){
		printf("\nenter the value");
		scanf("%d",y+i);
		}
		for(i=0;i<10;i++){
			*(z+i)=*(x+i)+*(y+i);
		}
		for(i=0;i<10;i++){
			printf("\nthe value is %d and address is %u",*(z+i),z+i);
			}
		getch();
		}