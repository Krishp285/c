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

	for(k=1;k<=3;k++){
	for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("%c",ch);
		}
		printf("\n");
		}

		printf("\n");
		}
		}
		getch();
		}
