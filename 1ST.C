#include<stdio.h>
#include<conio.h>
void main()
{
      int first,second,c;
      clrscr();
      printf("\nEnter the first number: ");
      scanf("%d",&first);

      printf("\nEnter the second number: ");
      scanf("%d",&second);

      c=first;
      first=second;
      second=c;

      printf("\nAfter swapping first number = %d ",first);
      printf("\nAfter swapping second number = %d ",second);




				    getch();

}//end of main