#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k=0,row;
clrscr();
printf("\nenter the number of row");
scanf("%d",&row);
for(i=1;i<=row;i++){
for(j=1;j<=i;j++){
printf("*",i);
}
printf("\n");
}
getch();
}