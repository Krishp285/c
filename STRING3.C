#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main(){
	char name[30];
	int i;
	int counter1=0,counter2,counter3=0;
	clrscr();

	printf("\nenter the parargraph",name);

	gets(name);
	counter3=strlen(name);
	for(i=0;i<=counter3;i++){
		if(name[i]=='a' || name[i]=='A'){
		    counter1++;
		}
		else if(name[i]=='o' || name[i]=='O')
			{
			counter1++;
			}
			else if(name[i]=='e' || name[i]=='E')
			{
			counter1++;
			}
			else if(name[i]=='i' || name[i]=='I')
			{
			counter1++;
			}
			else if(name[i]=='u' || name[i]=='U')
			{
			counter1++;
			}

	}
	printf("\nthe vowel is %d",counter1);
	printf("\nthe consonent is %d",counter3-counter1);

	getch();
		}
