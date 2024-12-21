/*
			author:-krish patel
			doc:-25 may 2023
			objective:-calculator
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int  a,b,c;
	float sqrt,cbrt;
	char sin,cos,tan,asin,acos;

	int choice;
	clrscr();
	printf("\n1------>addition");//calling of function
	printf("\n2------>subtraction");
	printf("\n3------>multiplication");
	printf("\n4------>division");
	printf("\n5------>modulus");
	printf("\n6------>sine");
	printf("\n7------>cosine");
	printf("\n8------>tangent");
	printf("\n9------>cosec");
	printf("\n10------>secant");
	printf("\n11------>log");
	printf("\n12------>cube");
       printf("\n13------>square");
	printf("\n14------>squareroot");
	printf("\n15------>cuberoot");
	printf("\n16------>pre increment");
	printf("\n17------>post increment");
	printf("\n18------>pre decrement");
	printf("\n19------>post decrement");
       printf("\n20------>antilog");
       printf("\nenter the choice");
       scanf("%d",&choice);
       switch(choice){
		case 1:printf("\nenter the first number");
		       scanf("%d",&a);
		       printf("\nenter the second number");
		       scanf("%d",&b);
		       c=a+b;
		       printf("the answer is %d",c);
		       break;
			case 2:printf("\nenter the first number");
		       scanf("%d",&a);
		       printf("\nenter the second number");
		       scanf("%d",&b);
		       c=a-b;
		       printf("the answer is %d",c);
		       break;
		       case 3:printf("\nenter the first number");
		       scanf("%d",&a);
		       printf("\nenter the second number");
		       scanf("%d",&b);
		       c=a*b;
		       printf("the answer is %d",c);
		       break;
		       case 4:printf("\nenter the first number");
		       scanf("%d",&a);
		       printf("\nenter the second number");
		       scanf("%d",&b);
		       c=a/b;
		       printf("the answer is %d",c);
		       break;
		       case 5:printf("\nenter the first number");
		       scanf("%d",&a);
		       printf("\nenter the second number");
		       scanf("%d",&b);
		       c=a%b;
		       printf("the answer is %d",c);
		       break;
			case 6:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=sin(a);
		       printf("the answer is %d",c);
		       break;

		       case 7:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=cos(a);
		       printf("the answer is %d",c);
		       break;
			case 8:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=tan(a);
		       printf("the answer is %d",c);
		       break;
			case 9:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=1/sin(a);
		       printf("the answer is %d",c);
		       break;
			case 10:printf("\nenter the first number");
		       scanf("%d",&a);
		       printf("the answer is %d",c);
		       break;
		       case 11:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=log(a);
		       printf("the answer is %d",c);
		       break;
		       case 12:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=a*a;
		       printf("the answer is %d",c);
		       break;
		       case 13:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=a*a*a;
		       printf("the answer is %d",c);
		       break;
		       case 14:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=sqrt(a);
		       printf("the answer is %d",c);
		       break;
			case 15:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=cbrt(a);
		       printf("the answer is %d",c);
		       break;
		       case 16:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=++a;
		       printf("the answer is %d",c);
		       break;
		       case 17:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=a++;
		       printf("the answer is %d",c);
		       break;
		       case 18:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=--a;
		       printf("the answer is %d",c);
		       break;
		       case 19:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=a--;
		       printf("the answer is %d",c);
		       break;
			case 20:printf("\nenter the first number");
		       scanf("%d",&a);
		       c=antilog(a);
		       printf("the answer is %d",c);
		       break;

		       case 21:exit(0);
		       }
		       getch();
		       }
