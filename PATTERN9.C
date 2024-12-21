#include<stdio.h>
#include<conio.h>
void main(){
int i,j,row;
clrscr();
printf("\nenter the number of row");
scanf("%d",&row);
for(i=5;i<=row;i--){
for(j=row;j>=i;j--){
printf("%d",i);
}
printf("\n");
}
getch();
}