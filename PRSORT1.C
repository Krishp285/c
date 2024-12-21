#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main(){
	    int a[SIZE];
	    int i,j,temp;
	    clrscr();
	    for(i=0;i<SIZE;i++)
	    {
	    printf("\nenter the value ofa[%d]:-",i);
	    scanf("%d",&a[SIZE]);
	    }
	     printf("\nthe unsorted array is :-");
	     for(i=0;i<SIZE;i++)
	    {
	    printf("%d\t",a[i]);
	    }
	    for(i=0;i<SIZE;i++)
	    {
	    for(j=0;j<SIZE-1;j++)
	    {
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}

	    }
	    }
	    printf("\nthe sorted array is:-\n");
	    for(i=0;i<SIZE;i++)
	    {
		printf("%d\t",a[i]);
	    }
	    getch();


}