#include<stdio.h>
#include<conio.h>
#define SIZE 5
struct computer{
		int productid,sdd;
		char company[30],model[30],ram[30],rom[30];
		float price;
		}s[SIZE];
void create();
void display();
void main(){//start of main
	int choice;
	while(1){//start of while
	clrscr();
	printf("\n1 for create ");
	printf("\n2 for display");
	printf("\n3 for exit");
	printf("\nenter the choice");
	scanf("%d",&choice);
	switch(choice){ //start of choice
		case 1: create();
			break;
		case 2: display();
			break;
		case 3:exit(0);
			break;
			}//end of choice1
			getch();
		}//end of while
		}//end of main
void create(){//start of create
	int i;
	int productid,sdd;
	char company,model,ram,rom;
	float temp;
	float price;
	for(i=0;i<SIZE;i++){//start of for
	printf("\nenter the product id");
	scanf("%d",&s[i].productid);
	printf("\nenter the company");
	scanf("%s",s[i].company);
	printf("\nenter the model");
	scanf("%s",s[i].model);
	printf("\nenter the ram");
	scanf("%s",s[i].ram);
	printf("\nenter the rom");
	scanf("%s",s[i].rom);
	printf("\nenter the ssd/hdd");
	scanf("%s",s[i].sdd);
	printf("\nenter the price");
	scanf("%f",&price);
	s[i].price=temp;
	}//end of for
	} //end of create
void display(){//start of display
	int i;
	  printf("\nproductid\tcompany\tmodel\tram\trom\tsdd/hdd\tprice\n");
	  for(i=0;i<SIZE;i++){//start of for loop
	      printf("\n%d\t%s\t%s\t%s\t%s\t%s\t%.2f\n",s[i].productid,s[i].company,s[i].model,s[i].ram,s[i].rom,s[i].sdd,s[i].price);
		}//end of for loop
		}//end of display
