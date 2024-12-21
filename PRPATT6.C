#include<stdio.h>
#include<conio.h>
void main(){
int i,j,row,k=0;
clrscr();
printf("\nenter the number of row");
scanf("%d",&row);
for(i=1;i<=row;i++){
for(j=1;j<=i;j++){
k++;
printf("%d",k);
}
printf("\n");
}
getch();
}