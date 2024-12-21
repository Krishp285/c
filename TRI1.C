#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,rows ;
	clrscr();
	printf("\nEnter the number of rows for vertical normal triangle: ");
				scanf("%d",&rows);
				for(k=1;k<=3;k++){//start of for of k (no of triange)
				for(i=0;i<=rows;i++){ //start of first for
				    for(j=0;j<=i;j++){ //start of second for
				    printf("* ");
				    }//end of second for
				    printf("\n");
				} //end of first for
				}//end of for of k (no of triange)

	printf("\nEnter the number of rows for vertical reverse triangle: ");
	scanf("%d",&rows);
	for(k=1;k<=3;k++){//start of for of k (no of triange)
	for(i=rows+1;i>=1;i--)
				  { //start of first for
	for(j=1;j<=i;j++)
				  { //start of second for
			printf("* ");
				  } //end of second for
			printf("\n");
				  } //end of first for
				  } //end of for of k (no of triange)
	printf("\nEnter the number of rows for normal vertical triangle: ");
				scanf("%d",&rows);
				k=1;
				while(k<=3){
				i=0;
				while(i<=rows){ //start of first while
				j=0;
				    while(j<=i){ //start of second while
				    printf("* ");
				    j++;
				    }//end of second while

				    printf("\n");
				    i++;
				} //end of first while
				 k++;
				}
	printf("\nEnter the number of rows reverse triangle : ");
	scanf("%d",&rows);
	k=1;
	while(k<=3){//start of while of k (no of triange)
	i=rows;
	while(i>=0)
				  { //start of first while
				     j=0;
	while(j<=i)

				  { //start of second while

			printf("* ");
			j++;
				  } //end of second while
			 i--;
			printf("\n");

				  } //end of first while
				  k++;
				  }//end of while of k (no of triange)
	printf("\nEnter the number of rows for normal triangle : ");
				scanf("%d",&rows);
				k=1;
				do{
				i=0;
				do{ //start of first while
				j=0;
				    do{ //start of second while
				    printf("* ");
				    j++;
				    }while(j<=i);//end of second while

				    printf("\n");
				    i++;
				}while(i<=rows); //end of first while
				k++;
				}while(k<=3);//end of do while of k (no of triange)
	printf("\nEnter the number of rows reverse triangle: ");
	scanf("%d",&rows);
	k=1;
	do{//start of do while of k (no of triange)
	i=rows;
	do  { //start of first do while
	j=0;
	 do { //start of second do while

	 printf("* ");
	 j++;
				  }while(j<=i); //end of second do while
	 i--;
	 printf("\n");

	   }while(i>=0); //end of first do while
	   k++;

	   }while(k<=3);//end of do while of k (no of triange)
		//end ofdo  while loop of horizontal triangle

	printf("\nEnter the number of rows for normal horizontal triangle: ");
	scanf("%d",&rows);
	  printf("\n");
	  for(k=1;k<=3;k++){//start of for of k (no of triange)
	  for(i=1;i<=3;i++)
			  { //start of first for

			  printf("*\t\t");
			  }//end of first for
			  printf("\n");
			  for(i=1;i<=3;i++)
			  { //start of second for
			  printf("**\t\t");
			  } //end of second for
			  printf("\n");
			  for(i=1;i<=3;i++)
			  {//start of third for
			  printf("***\t\t");
			  }//end of third for
			  printf("\n");
			  }//end of for of k (no of triange)
			//end of for loop of horizontal triangle


			   printf("\nEnter the number of rows for normal triangle: ");
			  scanf("%d",&rows);
			  printf("\n");
			  k=1;
			  while(k<=3){ //start of  while for no of triangle
			  i=1;
				while(i<=3){//start of first do while
				printf("*\t\t");
				i++;
				}//end of first  while
					printf("\n");
					i=1;
					while(i<=3){   //start of second while
					printf("**\t\t");
					i++;
					} //end of second while
						printf("\n");
						i=1;
						while(i<=3){ //start of third while
						printf("***\t\t");
						i++;
						}while(i<=3);//end of third while
						printf("\n");
						k++;
						} //end of  while for no of triangle
						//end of while loop of horizontal triangle
			  printf("\nEnter the number of rows for normal triangle : ");
			  scanf("%d",&rows);
			  printf("\n");
			  k=1;
			  do{ //start of do while for no of triangle
			  i=1;
				do{//start of first do while
				printf("*\t\t");
				i++;
				}while(i<=3);//end of first do while
					printf("\n");
					i=1;
					do{   //start of second do while
					printf("**\t\t");
					i++;
					}while(i<=3); //end of second do while
						printf("\n");
						i=1;
						do{ //start of third do while
						printf("***\t\t");
						i++;
						}while(i<=3);//end of third do whil
						printf("\n");
						k++;
						}while(k<=3);//start of do while for no of triangle
							//end of do while loop of horizontal triangle


		   printf("\nEnter the number of rows for horizontal reverse triangle: ");
				scanf("%d",&rows);
				 printf("\n");
		   for(k=1;k<=3;k++){
		   for(i=1;i<=3;i++)
			  {
			  printf("***\t");
			  }
			  printf("\n");
			  for(i=1;i<=3;i++)
			  {
			  printf("**\t");
			  }
			  printf("\n");
			  for(i=1;i<=3;i++)
			  {
			  printf("*\t");
			  }
			  printf("\n");
			  }

		  printf("\nEnter the number of rows for horizontal reverse triangle: ");
				scanf("%d",&rows);
				 printf("\n");
				 k=1;
			while(k<=3){
			  i=1;
			  while(i<=3)
			  {
			  printf("***\t");
			  i++;
			  }
			  printf("\n");
			  i=1;
			  while(i<=3)
			  {
			  printf("**\t");
			  i++;
			  }
			  printf("\n");
			  i=1;
			  while(i<=3)
			  {
			  printf("*\t");
			  i++;
			  }

			  k++;
			  printf("\n");
			  }
		printf("\nEnter the number of rows for normal triangle : ");
			  scanf("%d",&rows);
			  printf("\n");
			  k=1;
			  do{	//start of do while loop
				i=1;
				do{//start of do while loop 1
				printf("***\t\t");
				i++;
				}while(i<=3);//end of do while loop 1
					printf("\n");
					i=1;
					do{	//start of do while loop 2
					printf("**\t\t");
					i++;
					}while(i<=3);  	//end of do while loop 2
						printf("\n");
						i=1;
						do{//start of do while 3
						printf("*\t\t");
						i++;
						}while(i<=3); //end of do while loop 3
						k++;
						printf("\n");
						}while(k<=3);	//end of do while loop for no. triangl
						//end of do while loop of horizontal triangl



				getch();
				}