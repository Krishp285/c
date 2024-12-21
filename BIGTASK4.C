
/*
    Author:= Pruthvish Jigneshbhai Dave
    Doc:= 15 jun 2023
    Object:= To make all in one promgram


*/

#include<stdio.h>
//standard input output headerfile
#include<conio.h>
//console input output headerfile
#define si 5
#define k 4
#define ROW 3
#define COL 3
#define SIZE 5

void main()
{
int choice,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13,ch14,ch15,ch16,ch17,i=1,j=1,h,n,rows,e,f,o,center,key,min,max,mid,size,index;
int a[k],b[k],c[k],y[si],l[9],m=0,v;
int s[SIZE],d[SIZE],t[SIZE],x[ROW][COL],w[ROW][COL],z[ROW][COL],g[ROW][COL];
int q,p=0,u=0,choice1,choice2,choice3;

clrscr();
    printf("\n1 Loops");
    printf("\n2 Array");
    printf("\n3 EXIT");
    printf("\nEnter your choice = ");
    scanf("%d",&choice);
    switch(choice){
	case 1:
		printf("\n4 For");
		printf("\n5 While");
		printf("\n6 Do...While");
		printf("\nEnter your choice = ");
		scanf("%d",&ch1);
		switch(ch1)
		{
		case 4:
		 printf("\n7 Vertical Tri");
		 printf("\n8 Horizontal Tri");
		 printf("\nEnter your choice = ");
		 scanf("%d",&ch2);
		 switch(ch2)
		 {

			 case 7:
			 printf("\n9 Normal");
			 printf("\n10 Reversed");   //Inverted Tri
			 printf("\nEnter your choice = ");
			 scanf("%d",&ch3);
			 switch(ch3)
			 {
			 case 9:
				printf("\nEnter the number of rows: ");
				scanf("%d",&rows);
				for(i=0;i<=rows;i++){
				    for(j=0;j<=i;j++){
				    printf("* ");
				    }
				    printf("\n");
				}
			 break; // case 9
			 case 10:
				  printf("\nEnter the number of rows: ");
				  scanf("%d",&rows);
				  for(i=rows;i>=1;i--)
				  {
				  for(j=1;j<=i;j++)
				  {
				  printf("* ");
				  }
				  printf("\n");
				  }
			     break;// case 10
			     }   // end of ch3
			     break;//case 7

			 case 8:
			 printf("\n11 Normal");
			 printf("\n12 Reversed");
			 printf("\nEnter your choice = ");
			 scanf("%d",&ch4);
			 switch(ch4)
			 {
			  case 11:
			  for(i=1;i<=3;i++)
			  {
			  printf("*\t");
			  }
			  printf("\n");
			  for(i=1;i<=3;i++)
			  {
			  printf("**\t");
			  }
			  printf("\n");
			  for(i=1;i<=3;i++)
			  {
			  printf("***\t");
			  }

			  break;
			  case 12: for(i=1;i<=3;i++)
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
			  break;// case 12
			  }//end of ch4
			  break;// case 8
		 }
		 break;// case 4

	//FOR COMPLETED

		case 5:
		 printf("\n13 Vertical Tri");
		 printf("\n14 Horizontal Tri");//Inverted tri
		 printf("\nEnter your choice = ");
		 scanf("%d",&ch5);
		 switch(ch5)
		 {
		 case 13:
			 printf("\n15 Normal");
			 printf("\n16 Reversed");
			 printf("\nEnter your choice = ");
			 scanf("%d",&ch6);
			 switch(ch6)
			 {
			    case 15:
				    printf("\nEnter the number of rows: ");
				    scanf("%d",&rows);
				    i=0;
				    while(i<=rows){
				       j=0;
				       while(j<=i){
				       printf("* ");
				       j++;
				    }
				    printf("\n");
				    i++;
				}
				break;//case 15
				case 16:
					printf("\nEnter the number of rows: ");
				  scanf("%d",&rows);
				  i=rows;
				  while(i>=1)
				  {
				  j=0;
				  while(j<=i)
				  {
				  printf("* ");
				  j++;
				  }
				  printf("\n");
				  i--;
				  }
				  break;//case 16
			 }//end of ch6
			 break; // case 13
		  case 14:
			 printf("\n17 Normal");
			 printf("\n18 Reversed");
			 printf("\nEnter your choice = ");
			 scanf("%d",&ch7);
			 switch(ch7)
			 {
			  case 17:
			  i=1;
			  while(i<=3)
			  {
			  printf("*\t");
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
			  printf("***\t");
			  i++;
			  }

			  break;// case 17
			  case 18:
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

			  break;//case 18
			  }// ch 7
			  break; //case 14

		 }//end of ch5
		 break;//case 5

	//WHILE COMPLETED


		case 6:
		 printf("\n19 Vertical");
		 printf("\n20 Horizontal");
		 printf("\nEnter your choice = ");
		 scanf("%d",&ch8);
		 switch(ch8)
		 {
		   case 19:
			 printf("\n21 Normal");
			 printf("\n22 Reversed");
			 printf("\nEnter your choice = ");
			 scanf("%d",&ch9);
			 switch(ch9)
			 {
			  case 21:
			  h=1;
			  do{
			  i=1;
				do{
				j=1;
					do{
					printf("*");
					j++;
					}while(j<=i);
						printf("\n");
						i++;
						}while(i<=5);


						printf("\n");
						h++;
						}while(h<=3);
			  break;//case 21

			  case 22:
				h=1;
				do{
				i=5;
				do{
				j=1;
					do{
					printf("*");
					j++;
					}while(j<=i);
					printf("\n");
					i--;
					}while(i>=1);

				printf("\n");
				h++;
				}while(h<=3);
				break;//case 22



			 }// ch 9
			 break; //case 19
			 case 20:

			 printf("\n23 Normal");
			 printf("\n24 Reversed");
			 printf("\nEnter your choice = ");
			 scanf("%d",&ch10);
			 switch(ch10)
			 {
			      case 23:
				i=1;
				do{
				printf("*\t\t");
				i++;
				}while(i<=3);
					printf("\n");
					i=1;
					do{
					printf("**\t\t");
					i++;
					}while(i<=3);
						printf("\n");
						i=1;
						do{
						printf("***\t\t");
						i++;
						}while(i<=3);
						printf("\n");

			      break;// case 23
			      case 24:
				i=1;
				do{
				printf("***\t\t");
				i++;
				}while(i<=3);
					printf("\n");
					i=1;
					do{
					printf("**\t\t");
					i++;
					}while(i<=3);
						printf("\n");
						i=1;
						do{
						printf("*\t\t");
						i++;
						}while(i<=3);
						printf("\n");
						}
			      break;//case 24
			      }//case ch10
			      break;//case 20

		 } // switch case of ch1
		 break;


	//DO...WHILE COMPLETED
	// CASE 1 COMPLETED
//****************************************************************************************************************************
 case 2:
	  printf("\n25 1D");
	  printf("\n26 2D");
	  printf("\nEnter your choice = ");
	  scanf("%d",&ch11);
	  switch(ch11)
	  {
	     case 25: printf("\n27 Calculator");
		      printf("\n28 Sorting");
		      printf("\n29 Searching");
		      printf("\nEnter your choice = ");
		      scanf("%d",&ch12);
		      switch(ch12)
		      {
			case 27:
				  printf("\n30--->Addition");
				  printf("\n31--->Subtraction");
				  printf("\n32--->Multiplicaton");
				printf("\n33--->Divison");

				printf("\nEnter your choice = ");
				scanf("%d",&ch13);
				switch(ch13)
				{
						case 30: printf("\nEnter the %d value fpr the first array\n",k);
								for(i=0;i<k;i++){
								printf("\nEnter the value of a[%d]",i);
								scanf("%d",&a[i]);
								} // end of for scanning of a
									for(i=0;i<k;i++){
									printf("\Enter the value of b[%d]",i);
									scanf("%d",&b[i]);
									}  //end of for scanning for b
										for(i=0;i<k;i++){
										c[i] = a[i]+b[i];
										}
									for(i=0;i<k;i++)
									{
										printf("%d + %d = %d\n",a[i],b[i],c[i]);
									}
						break;
						case 31: printf("\nEnter the %d value fpr the first array\n",k);
								for(i=0;i<k;i++){
								printf("\nEnyter the value of a[%d]",i);
								scanf("%d",&a[i]);
								} // end of for scanning of a
									for(i=0;i<k;i++){
									printf("\Enter the value of b[%d]",i);
									}  //end of for scanning for b
													for(i=0;i<k;i++){
										c[i] = a[i] - b[i];
									}
										for(i=0;i<k;i++)
										{
										printf("%d - %d = %d\n",a[i],b[i],c[i]);
										}
						break;
						case 32: printf("\nEnter the %d value fpr the first array\n",k);
								for(i=0;i<k;i++){
								printf("\nEnyter the value of a[%d]",i);
		scanf("%d",&a[i]);
	} // end of for scanning of a
	for(i=0;i<k;i++){
	printf("\Enter the value of b[%d]",i);
	}  //end of for scanning for b
	for(i=0;i<k;i++){
		c[i] = a[i] * b[i];
	}
	for(i=0;i<k;i++)
	{
		printf("%d * %d = %d\n",a[i],b[i],c[i]);
	}
								break;
								case 33: printf("\nEnter the %d value fpr the first array\n",k);
	for(i=0;i<k;i++){

		printf("\nEnyter the value of a[%d]",i);
		scanf("%d",&a[i]);
	} // end of for scanning of a
	for(i=0;i<k;i++){
	printf("\Enter the value of b[%d]",i);
	}  //end of for scanning for b
	for(i=0;i<k;i++){
		c[i] = a[i] / b[i];
	}
	for(i=0;i<k;i++)
	{
		printf("%d / %d = %d\n",a[i],b[i],c[i]);
	}
								break;
	}//ch13

	break;// case 27

 //CALCY IN 1D


 case 28:    for(e=0;e<si;e++){
	 printf("\nenter the value off y[%d]",e);
	 scanf("%d",&y[e]);

			}
			 printf("\nThe unsorted array is\n");
	 for(e=0;e<si;e++){
			  printf("%d\t",y[e]);
			  }

	 for(e=0;e<si;e++){
		for(f=0;f<si-1;f++){
			if(y[f]>y[f+1]){
					o=y[f];
					y[f]=y[f+1];
					y[f+1]=o;




		}// if

	 }//ifor


	 }//ofor

	 printf("\nthe sorted array is\n");
	 for(e=0;e<si;e++){
	 printf("%d\t",y[e]);

	}
	break;

 //1D ARRAY SORTING COMPLETED

 case 29:
	   printf("\34 Linear");
	   printf("\35 Binary");
	   printf("\nEnter your choice = ");
	   scanf("%d",ch14);
	   switch(ch14)
	   {
		case 34: for(i=0;i<si;i++)
	{
		printf("\nenter the element a[%d]",i);
		scanf("%d",&a[i]);

	}
	printf("\nEnter the atrtay is as follows\n");
	for(i=0;i<si;i++)
	{
	printf("%d\t",a[i]);
	}
	printf("\nenter the key value you want to search for = ");
	scanf("%d",&key);
	for(i=0;i<si;i++)
	{
	if(key==a[i])
	{
	index=i;


	}
	}
	if(index==-1)
	{
	printf("\nSearch unsuccessful ");
	}
	else{
	printf("\nThe key %d is at %d  place",key,index+1);
	}



	       break;

 //SEARCHING IN LINEAR 1D
	       case 35:   for(e=0;e<si;e++){
	 printf("\nenter the value off y[%d]",e);
	 scanf("%d",&y[i]);

			}
			 printf("\nThe unsorted array is\n");
	 for(e=0;e<si;e++){
			  printf("%d\t",a[e]);
			  }

	 for(e=0;e<si;e++){
		for(f=0;f<si-1;f++){
			if(y[f]>y[f+1]){
				       //	c=y[f];
				       //	y[f]=y[f+1];
				     //	y[f+1]=c;




		}// if

	 }//ifor


	 }//ofor

	 printf("\nthe sorted array is\n");
	 for(e=0;e<si;e++){
	 printf("%d\t",y[e]);
	 break;

	 }

	printf("\nenter the key value you want to search for = ");
	scanf("%d",&key);
	for(e=0;e<si;e++)
	{
	if(key==y[e])
	{
	index=e;
	break;

	}
	}
	if(center==-1)
	{
	printf("\nSearch unsuccessful ");
	}
	else{
	printf("\nThe key %d is at %d  place",key,index+1);
	}
	min=0;
	max=size-1;
	while(min<=max){
	mid=(min+max)/2;
	if(a[mid]==key){
	 index=mid;

	 }
	 else
	 {
	 if(key<y[mid]){
			max=mid-1;
			}else {
			min=mid+1;
			}
			}
			}
			}
			if(index){
				printf("element found");
				 }
				 else{
				printf("element not found");
				 }
				 break;



	   }//ch14
	   break;





 //SEARCHING IN BINARY 1D

	 case 26:
		  printf("\n36 Calcultor");
		  printf("\n37 sorting");
		  printf("\nEnter your choice = ");
		  scanf("%d",&ch15);
		  switch(ch15)
		  {
		   case 36:
			    printf("\n38---->add:");
			  printf("\n39---->sub:");
			  printf("\n40---->mul:");
			  printf("\n41---->div:");
			  printf("\nEnter your choice = ");
			  scanf("%d",&choice1);
			  switch(choice1)
			  {
			  case 38 : clrscr();
				     printf("\n FOR LOOP:");
				     printf("\n ADD:");
				     printf("\n");
				     printf("\n 1st arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       printf("\n value x[%d][%d]",p,u);
				       scanf("%d",&x[p][u]);
				       }
				    }
				    printf("\n 2nd arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
					  printf("\n value w[%d][%d]",p,u);
					  scanf("%d",&w[p][u]);
					  }
				    }
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       z[p][u]=x[p][u]+w[p][u];
				       }
				     }
				      for(p=0;p<ROW;p++){
				      for(u=0;u<COL;u++){
					   printf("%d\t",z[p][u]);
					   }
					printf("\n");
				    }
				    getch();
		      break;
		      case 39 : clrscr();
				     printf("\n FOR LOOP:");
				     printf("\n SUB:");
				     printf("\n");
				     printf("\n 1st arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       printf("\n value x[%d][%d]",p,u);
				       scanf("%d",&x[p][u]);
				       }
				    }
				    printf("\n 2nd arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
					  printf("\n value w[%d][%d]",p,u);
					  scanf("%d",&w[p][u]);
					  }
				    }
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       z[p][u]=x[p][u]-w[p][u];
				       }
				     }
				      for(p=0;p<ROW;p++){
				      for(u=0;u<COL;u++){
					   printf("%d\t",z[p][u]);
					   }
					printf("\n");
				    }
				    getch();
			break;

		       case 40 : clrscr();
				     printf("\n FOR LOOP:");
				     printf("\n MUL:");
				     printf("\n");
				     printf("\n 1st arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       printf("\n value x[%d][%d]",p,u);
				       scanf("%d",&x[p][u]);
				       }
				    }
				    printf("\n 2nd arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
					  printf("\n value w[%d][%d]",p,u);
					  scanf("%d",&w[p][u]);
					  }
				    }
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       z[p][u]=x[p][u]*w[p][u];
				       }
				     }
				      for(p=0;p<ROW;p++){
				      for(u=0;u<COL;u++){
					   printf("%d\t",z[p][u]);
					   }
					printf("\n");
				    }
				    getch();
				     break;
		     case 41 : clrscr();
				     printf("\n FOR LOOP:");
				     printf("\n DIV:");
				     printf("\n");
				     printf("\n 1st arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       printf("\n value x[%d][%d]",p,u);
				       scanf("%d",&x[p][u]);
				       }
				    }
				    printf("\n 2nd arry:");
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
					  printf("\n value y[%d][%d]",p,u);
					  scanf("%d",&w[p][u]);
					  }
				    }
				     for(p=0;p<ROW;p++){
				     for(u=0;u<COL;u++){
				       z[p][u]=x[p][u]/w[p][u];
				       }
				     }
				      for(p=0;p<ROW;p++){
				      for(u=0;u<COL;u++){
					   printf("%d\t",z[p][u]);
					   }
					printf("\n");
				    }
				    getch();
	 break;
	 }
	 break;

 //CALCY IN 2D

			case 37:  clrscr();
   for(i=0;i<ROW;i++){
      for(j=0;j<COL;j++){
		   printf("\nEnter the value of g[%d][%d]",i,j);
		   scanf("%d",&g[i][j]);

      }
   }
   printf("\nThe 2d is as follows\n");
   for(i=0;i<ROW;i++){
      for(j=0;j<COL;j++){
	     printf("%d\t",g[i][j]);
	     }
	     printf("\n");
   }
   for(i=0;i<ROW;i++){
    for(j=0;j<COL;j++){
      l[m]=g[i][j];
      m++;
    }
   }
   for(i=0;i<9;i++){
    for(j=0;j<8;j++){
	 if(l[j]>l[j+1]){
		v=l[j];
		l[j]=l[j+1];
		l[j+1]=v;

	 }
    }
    }
   m=0;
    for(i=0;i<ROW;i++){
       for(j=0;j<COL;j++){
	   g[i][j]=l[m];
	   m++;
       }
    }
    printf("\nThe 2d sorted is as follows\n");
    for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		  printf("%d\t",g[i][j]);
	}
	printf("\n");
    }
	getch();
	break;
	}
	break;

       }





 case 3 : exit(0);

		  }//choice












getch();
}//end of main


//CREATED BY PRUTHVISH J. DAVE