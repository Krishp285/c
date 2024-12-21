#include<stdio.h>
#include<conio.h>
void main()
{
    int co1,co2;
    clrscr();

    printf("\nEnter the values of X and Y cordinates; ");
    scanf("%d%d",&co1,&co2);

    if(co1>0 && co2>0){
    printf("The cordinate (%d,%d) lies in the first quan..",co1,co2);
    }
    else if(co1<0 && co2>0){
    printf("The cordinate (%d,%d) lies in the second quan..",co1,co2);
    }
    else if(co1<0 && co2<0){
    printf("The cordinate (%d,%d) lies in the third quan..",co1,co2);
    }
    else if(co1>0 && co2<0){
     printf("The cordinate (%d,%d) lies in the Fourth quan..",co1,co2);
    }

	getch();
}//end of main