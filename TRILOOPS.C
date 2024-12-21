#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,choice,choice1,rows,no;
	char ch;
	clrscr();
	printf("\n1 for vertical noraml triagle");
	printf("\n2 for vertical noraml triagle(no of triangle)");
	printf("\n3 for vertical reverse triagle");
	printf("\n4 for vertical reverse triagle(no of triangle)");
	printf("\nenter the choice:- ");
	scanf("%d",&choice1);
	switch(choice1){
		case 1:printf("\nenter the number of rows");
		       scanf("%d",&rows);
		       printf("\nenter the character to be printed");
		       scanf(" %c",&ch);
		       for(i=1;i<=rows;i++)
		       {
		       for(j=1;j<=i;j++)
		       {
		       printf(" %c",ch);
		       }
		       printf("\n");
		       }
		       break;
		case 2:printf("\nenter the number of triangle to be printed");
		       scanf("%d",&no);
		       printf("\nenter the number of rows");
		       scanf("%d",&rows);
		       printf("\nenter the character to be printed");
		       scanf(" %c",&ch);
		       for(k=1;k<=no;k++)
		       {
		       for(i=1;i<=rows;i++)
		       {
		       for(j=1;j<=i;j++)
		       {
		       printf(" %c",ch);
		       }
		       printf("\n");
		       }
		       printf("\n");
		       }
		       break;
		case 3:
		       printf("\nenter the number of rows");
		       scanf("%d",&rows);
		       printf("\nenter the character to be printed");
		       scanf(" %c",&ch);
		       for(i=rows;i>=1;i--)
		       {
		       for(j=1;j<=i;j++)
		       {
		       printf(" %c",ch);
		       }
		       printf("\n");
		       }
		       break;
		case 4:printf("\nenter the number of triangle to be printed");
		       scanf("%d",&no);
		       printf("\nenter the number of rows");
		       scanf("%d",&rows);
		       printf("\nenter the character to be printed");
		       scanf(" %c",&ch);
		       for(k=1;k<=no;k++)
		       {
		       for(i=rows;i<=1;i--)
		       {
		       for(j=i;j<=rows;j++)
		       {
		       printf(" %c",ch);
		       }
		       printf("\n");
		       }
		       printf("\n");
		       }
		       break;
			}
		getch();
}
