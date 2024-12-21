#include<stdio.h>
#include<conio.h>
void main()
{
     int n1,n2,n3;
     clrscr();
     printf("\nEnter the first number: ");
     scanf("%d",&n1);
     printf("\nEnter the second number: ");
     scanf("%d",&n2);
      printf("\nEnter the third number: ");
     scanf("%d",&n3);
     if (n1>=n2)
     {
	if(n2>=n3)
	{
	printf("%d is the largest number.",n1);
	}
	else
	{
	printf("%d is the largest nummber.",n2);
	}
     }
     else
     {
       if(n2>=n3)
       {
       printf("%d is the largest nummber.",n2);
       }
       else
       {
       printf("%d is the largest nummber.",n3);
       }

}


      getch();
}//end of main