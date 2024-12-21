#include<stdio.h>
#include<conio.h>
void main(){
	int i,choice;
	int a[10],c[10],b[10];
	int *x,*y,*z;
	clrscr();
	x=a;
	y=b;
	z=c;
	printf("\n1 for addition");
	printf("\n2 for subtraction");
	printf("\n3 for multiplication ");
	printf("\n4 for division");
	printf("\n5 for exit");
	printf("\nenter the choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:	for(i=0;i<10;i++){
		printf("\nenter the value");
		scanf("%d",x+i);
		}
			for(i=0;i<10;i++){
			printf("\nenter the value");
			scanf("%d",y+i);
			}
			for(i=0;i<10;i++){
			*(z+i)=*(x+i)+*(y+i);
			}
			for(i=0;i<10;i++){
			printf("\nthe addition is %d and address is %u",*(z+i),z+i);
			}
			break;
		case 2:
			for(i=0;i<10;i++){
				printf("\nenter the value");
				scanf("%d",x+i);
				}
			for(i=0;i<10;i++){
				printf("\nenter the value");
				scanf("%d",x+i);
				}
			for(i=0;i<10;i++){
					*(z+i)=*(x+i)-*(y+i);

				}
			for(i=0;i<10;i++){
				printf("\nthe subtraction is %d and the address is %u",*(z+i),z+i);
			}
			break;
	case 3:	for(i=0;i<10;i++){
		printf("\nenter the value");
		scanf("%d",x+i);
		}
			for(i=0;i<10;i++){
			printf("\nenter the value");
			scanf("%d",y+i);
			}
			for(i=0;i<10;i++){
			*(z+i)=(*(x+i)) * (*(y+i));
			}
			for(i=0;i<10;i++){
			printf("\nthe multiplication is %d and address is %u",*(z+i),z+i);
			}
			break;
		case 4:
			for(i=0;i<10;i++){
				printf("\nenter the value");
				scanf("%d",x+i);
				}
			for(i=0;i<10;i++){
				printf("\nenter the value");
				scanf("%d",x+i);
				}
			for(i=0;i<10;i++){
					*(z+i)=*(x+i) / *(y+i);

				}
			for(i=0;i<10;i++){
				printf("\nthe division is %d and the address is %u",*(z+i),z+i);
			}
			break;
		case 5: exit(0);
		break;
			}
			getch();
			}