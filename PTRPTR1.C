#include<stdio.h>
#include<conio.h>
void main(){
	   int no,*ptr;
	   clrscr();
	   no=10;
	   ptr=&no;
	   ptrptr=&ptr;
	   print("\nno is %d",no);
	   printf("&no is %u",&no);
	   printf("ptr(&no) is %u",ptr);
	   printf("\n&ptr is %u",&ptr);
	   printf("\n*ptr is %u",*ptr);
	   printf("\nptrptr(&ptr) is %u",ptrptr);
	   printf("\n&ptrptr is %u",&ptrptr;
	   printf("\n*ptrptr is %u",*ptrptr;
	   printf("\n**ptrptr is %u");
				//u is unsigned integer
	   **ptrptr=100;
	   printf("\nupdated **ptrptr is %u",**ptrptr);
	   printf("\nupdated no is %u",no);
	   getch();
}