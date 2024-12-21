#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main(){
	char name[30],name1[30];
	int len,x;
	clrscr();
	printf("\nenter the string\n");
	// scanf("%s",name);
	gets(name);
	printf("\nthe string is %s",name);
	printf("\nenter the string\n");
	gets(name1);
	printf("\nthe string is %s",name1);
	strrev(name);
	printf("\nthe reverse of the  string is %s",name);
	len=strlen(name);
	printf("\nthe length of name %s is %d",name,len);
	strcmp(name,name1);//ramesh and rakesh ascii value is compared of each letter
	if(x==0){
		printf("\n%s and %s are equal",name,name1);
		}
	else{
		 printf("%s and %s are not equal",name,name1);
		}
	strlwr(name);
	printf("\nthe lower case is %s",name);
	strupr(name);
	printf("\nthe upper case is %s",name);
	strcpy(name,name1);
	printf("\nthe string name1 is %s",name1);
	getch();
	}
