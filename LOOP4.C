/*			author=krish patel
			doc=1 june 2023
			objective=to create triangle
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,n;
	char ch;
	clrscr();
	printf("\nenter the character of triangle to be print");
	scanf("%c",&ch);
	printf("\nenter the number of rows of triangle to be print");
	scanf("%d",&n);

	for(i=1;i<=3;i++){
	for(j=1;j<=i;j++){
			 printf("%c",ch);
			 }
			 printf("\t");
	for(k=1;k<=i;k++){
		printf("%c",ch);
		}
		printf("\n");
		for(l=1;l<=i;l++){
			printf("%c",ch);
		}

		printf("\n");

		}
		getch();
		}



