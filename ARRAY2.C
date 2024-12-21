#include<stdio.h>
#include<conio.h>
void main(){
	int rollno[7];
	int i,choice;
	float mobile[7];
	float m;
	double

	clrscr();
	printf("\n1 int");
	printf("\n2 float");
	printf("\n3 char ");
	printf("\n4 double");
	printf("\n5 exit");
	printf("\nenter the choice - ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
	for(i=0;i<7;i++){
		printf("\nenter the value of array rollno[%d]",i);
		scanf("%d",&rollno[i]);
		}
	for(i=0;i<7;i++){
		printf("\n%d",rollno[i]);
		}
		break;
				case 2:
	for(mobile=0;mobile<7;mobile++){
		printf("\nenter the value of array mobile[%f]",m);
		scanf("%f",&mobile[m]);
		}
	for(mobile=0;mobile<7;mobile++){
		printf("\n%d",mobile[m]);
		}
		break;
		getch();
		}
		}