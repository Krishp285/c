#include<stdio.h>
#include<conio.h>
#define SIZE 2
struct customer
{
	int cid,flag,bill;
	char name[30];
	float unit;

}s[SIZE];
 void create();//declaration part
 void display();//declaration part
 int search();//declaration part

void calculatebill();
 void main() {
		   int choice,id,i;
		   while(1){
				 clrscr();
				 printf("\n1---- Create");
				 printf("\n2---- Display");
				 printf("\n3---- Search");
				 printf("\n4---- Exit");
				 printf("\nEnter your choice = ");
				 scanf("%d",&choice);
				 switch(choice){
						 case 1:create();
						 break;
						 case 2:display();
						 break;
						 case 3:id=search();
							if(id!=-1){
								printf("\nRecord found at %d",id);
							}
							else
							{
								printf("\nRecord not found");
							}

						 break;
						 case 4:exit(0);




						}//end of switch
						getch();
			   }//end of while
	     }//end of main
     void create()
     {
     int i;
     float temp;
     for(i=1;i<=SIZE;i++)
     {


	 printf("\nEnter the CID = ");
	 scanf("%d",&s[i].cid);

	 printf("\nEnter the name of the customer = ");
	 scanf("%s",&s[i].name);

	 printf("\nEnter total units consumed = ");
	 scanf("%d",&s[i].unit);
	 calculatebill(i);
	 }

     }
     void calculatebill()
     {
     int i;
     int bill;
	      if(s[i].unit<199)
	      {
		s[i].bill='1';
	      }//end of if
	      else if(s[i].unit>200 && s[i].unit<400)
	      {
		s[i].bill='2';
	      }//end of else if
	      else if(s[i].unit>400 && s[i].unit<600)
	      {
	      s[i].bill='3';
	      }//enf od else if
	      else
	      {
	      s[i].bill='4';
	      }

     }

     void display()
     {
      int i,flag,bill;
       printf("\nCID\tName\tBill\n");
       for(i=1;i<=SIZE;i++)
       {
       printf("\n%d\t%s\t%d\n",s[i].cid,s[i].name,s[i].bill);

     } //end of for
       for(i=1;i<=SIZE;i++)
       {
	s[i].flag=-1;
       }
     } //end of display
      int search()
      {
      int id,i;
      printf("\nEnter the cid of which u want to search = ");
      scanf("%d",&id);
      for(i=1;i<=SIZE;i++)
      {
	  if(s[i].cid==id)
	  {
	     return i;
	  }//enf of if


      }//end of for
      return -1;



      }//end of search

    void del()
	{
	int i,flag;
	int choice,n;

	for(i=1;i<=SIZE;i++)
	{
	printf("\nEnter the cid = ");
	scanf("%d",&n);
	if(n<=s[i].cid){

	   s[i].flag=-1;
	   printf("\nRecord deleted successfully");


		}//end of if

	    else
	    {
	     printf("\nRecord not found");
	    }
	    }
	}//end of del
