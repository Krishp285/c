#include<stdio.h>
#include<conio.h>
void main(){
	int i,start,end,number,prime;
	clrscr();
	printf("\nenter the starting point = ");
	scanf("%d",&start);
	printf("\nenter the ending point = ");
	scanf("%d",&end);
	FILE *file = fopen("prime.txt","w");
	if(file==NULL)
	{
	printf("\nerror opening file");
	return;
	}
	for(number=start;number<=end;number++)
	{if(number<=1)
	continue;
	prime=1;
	for(i=2;i<number;i++){
	if(number%i==0){
	prime=0;
	break;
	}
	}
	if(prime)
	fprintf(file,"%d\n",number);
	}
	fclose(file);
	printf("\nprime numbers have been wriiten in prime.txt file");
	getch();
	}
