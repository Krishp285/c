#include<stdio.h>
#include<conio.h>
void main(){
	   int no,*ptr,**ptrptr;
	   clrscr();
	   no=10;
	   ptr=&no;
	   ptrptr=&ptr;
	   printf("\nno is %d",no);
	   printf("\nno is %u",&no);
	   printf("\nptr(&no) is %u",ptr);
	   printf("\n&ptr is %u",&ptr);
	   printf("\n*ptr is %u",*ptr);
	   printf("\nptrptr(&ptr) is %u",ptrptr);
	   printf("\n&ptrptr is %u",&ptrptr);
	   printf("\n*ptrptr is %u",*ptrptr);
	   printf("\n**ptrptr is %u");
				//u is unsigned integer
	   **ptrptr=100;
	   printf("\nupdated **ptrptr is %u",**ptrptr);
	   printf("\nupdated no is %u",no);
	   getch();
}