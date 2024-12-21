/*			author=krish patel
			doc=1 june 2023
			objective=to create triangle
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,j=1,k=1,n;
	char ch;
	clrscr();
	printf("\nenter the character of triangle to be print");
	scanf("%c",&ch);
	printf("\nenter the number of rows of triangle to be print");
	scanf("%d",&n);
	while(k<=3){
	i=1;
	while(i<=n){
	j=1;
		   while(j<=i){
		   printf("%c",ch);
		   j++;
		   }
		   i++;
		   printf("\n");
		   }
		   k++;
		   printf("\n");
		   }
		   getch();
		   }

