/*			author - krish patel
			doc-16 june 2023
			objective-all loops


*/


#include<stdio.h>
//standerd input output header file
#include<conio.h>
 // console input output header file
#define SIZE 5
//size of array is 5
#define ROW 2
#define COL 2
void main(){
	int i,j,k,l,m,n,g,choice,choice1,choice2,choice3,choice4,rows;
	int x[SIZE],y[SIZE],z[SIZE],choice5,choice6,choice7,choice8,choice9;
	int a[ROW][COL],b[ROW][COL],c[ROW][COL];
	int key,index,center,min,max,mid,size;
	while(1){
	clrscr();
	printf("\n1 Loops");
    printf("\n2 Array");
    printf("\n3 EXIT");
    printf("\nEnter your choice = ");
    scanf("%d",&choice1);
	switch(choice1){//start of choice 1
	case 1:
	  printf("\n1 for loop ");
    printf("\n2 while loop");
    printf("\n3 do while loop");
    printf("\nEnter your choice = ");
	scanf("%d",&choice2);
	switch(choice2){
	case 1:
	printf("\n1 --> vertical triangle");
	printf("\n2 --> horizontal triangle");
	printf("\nenter your choice");
	scanf("%d",&choice3);
	switch(choice3){//start of choice 3
		case 1:
    printf("\n1 --> normal triangle");
	printf("\n2 --> reverse triangle");
	printf("\nenter your choice");
    scanf("%d",&choice4);
	switch(choice4){//start of choice 4
	case 1:
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
		     break;
	case 2:
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

			     break;// case 10
			     }   // end of choice4
			     break;//case 7
     case 2://start of choice 4

      printf("\n1 --> normal triangle");
	printf("\n2 --> reverse triangle");
	printf("\nenter your choice");
    scanf("%d",&choice4);
	switch(choice4){//start of choice 4
	case 1:    	printf("\nEnter the number of rows for normal horizontal triangle: ");
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
			 break;
	  case 2:  printf("\nEnter the number of rows for horizontal reverse triangle: ");
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
			  break;
			  }
			  break;
			  }
			  break;
			  //end of for loop

	case 2:  printf("\n1 --> vertical triangle");
	printf("\n2 --> horizontal triangle");
	printf("\nenter your choice");
	scanf("%d",&choice3);
	switch(choice3){//start of choice 3
		case 1:
	printf("\n1 --> normal triangle");
	printf("\n2 --> reverse triangle");
	printf("\nenter your choice");
    scanf("%d",&choice4);
	switch(choice4){//start of choice 4
	    case 1:printf("\nEnter the number of rows for normal vertical triangle: ");
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
				break;
	    case 2:
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

			break;
			}     //end of
			break;
	     case 2://start of choice 4
      printf("\n1 --> normal triangle");
	printf("\n2 --> reverse triangle");
	printf("\nenter your choice");
    scanf("%d",&choice4);
	switch(choice4){//start of choice 4
	 case 1:      	printf("\nEnter the number of rows for normal horizontal triangle: ");
	scanf("%d",&rows);
	  printf("\n");
	  k=1;
	  while(k<=3){//start of for of k (no of triange)
	  i=1;
	  while(i<=3)
			  { //start of first for
			   i++;
			  printf("*\t\t");
			  }//end of first for
			  printf("\n");
			  i=1;
			  while(i<=3)
			  { //start of second for
			  i++;
			  printf("**\t\t");
			  } //end of second for
			  i++;
			  printf("\n");
			  i=1;
			  while(i<=3)
			  {//start of third for
			  printf("***\t\t");
			  i++;
			  }//end of third for
			  printf("\n");
			  k++;
			  }//end of for of k (no of triange)
			//end of for loop of horizontal triangle
			 break;

	  case 2:printf("\nEnter the number of rows for horizontal reverse triangle: ");
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
			  break;
			  }
			  break;
			  }
			  break;

		case 3:  printf("\n1 --> vertical triangle");
	printf("\n2 --> horizontal triangle");
	printf("\nenter your choice");
	scanf("%d",&choice3);
	switch(choice3){//start of choice 3
		case 1:
	printf("\n1 --> normal triangle");
	printf("\n2 --> reverse triangle");
	printf("\nenter your choice");
    scanf("%d",&choice4);
	switch(choice4){//start of choice 4
	case 1: 	printf("\nEnter the number of rows for normal triangle : ");
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
				break;
	case 2:
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

	    break;
	    }
	    break;
		case 2:
	printf("\n1 --> normal triangle");
	printf("\n2 --> reverse triangle");
	printf("\nenter your choice");
    scanf("%d",&choice4);
	switch(choice4){//start of choice 4
	case 1:  printf("\nEnter the number of rows for normal triangle : ");
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
						break;

	case 2:printf("\nEnter the number of rows for normal triangle : ");
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

		     break;
		     }
		     break;
		     }
		     break;
		     }



//------------------------------------------------------------------------------//
case 2:   printf("\n1 1D");
	  printf("\n2 2D");
	  printf("\nEnter your choice = ");
	  scanf("%d",&choice5);
	  switch(choice5)
	  {
	     case 1: printf("\n27 Calculator");
		      printf("\n28 Sorting");
		      printf("\n29 Searching");
		      printf("\nEnter your choice = ");
		      scanf("%d",&choice6);
		      switch(choice6)
		      {
			case 1:
				  printf("\n30--->Addition");
				  printf("\n31--->Subtraction");
				  printf("\n32--->Multiplicaton");
				printf("\n33--->Divison");

				printf("\nEnter your choice = ");
				scanf("%d",&choice7);
				switch(choice7)
				{
				case 1: printf("\nEnter the %d value of the first array",SIZE);
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
		}
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
		}
		for(i=0;i<SIZE;i++){
			z[i]=x[i]+y[i];
		}
		for(i=0;i<SIZE;i++){
			printf("%d + %d = %d\n",x[i],y[i],z[i]);
		}

	 break;
	 case 2:printf("\nEnter the %d value of the first array",SIZE);
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
		}
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
		}
		for(i=0;i<SIZE;i++){
			z[i]=x[i]-y[i];
		}
		for(i=0;i<SIZE;i++){
			printf("%d - %d = %d\n",x[i],y[i],z[i]);
		}

	 break;
	 case 3:printf("\nEnter the %d value of the first array",SIZE);
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
		}
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
		}
		for(i=0;i<SIZE;i++){
			z[i]=x[i]*y[i];
		}
		for(i=0;i<SIZE;i++){
			printf("%d * %d = %d\n",x[i],y[i],z[i]);
		}

	 break;
	 case 4:printf("\nEnter the %d value of the first array",SIZE);
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
		}
		for(i=0;i<SIZE;i++){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
		}
		for(i=0;i<SIZE;i++){
			z[i]=x[i]/y[i];
		}
		for(i=0;i<SIZE;i++){
			printf("%d / %d = %d\n",x[i],y[i],z[i]);
		}

		break;
		}
		break;

	case 2:		printf("\n1----> Addition");
			printf("\n2----> Subtraction");
			printf("\n3----> Multiplication");
			printf("\n5----> Division");
			printf("\nEnter the choice :");
			scanf("%d",&choice);
			switch(choice){
	case 1:	printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			z[i]=x[i]+y[i];
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("%d + %d = %d\n",x[i],y[i],z[i]);
			i++;
		}
		break;
	case 2:	printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			z[i]=x[i]-y[i];
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("%d - %d = %d\n",x[i],y[i],z[i]);
			i++;
		}
		break;
	case 3:	printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			z[i]=x[i]*y[i];
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("%d * %d = %d\n",x[i],y[i],z[i]);
			i++;
		}
		break;
	case 4:	printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}
		i=0;
		while(i<SIZE){
			z[i]=x[i]/y[i];
			i++;
		}
		i=0;
		while(i<SIZE){
			printf("%d / %d = %d\n",x[i],y[i],z[i]);
			i++;
		}
		break;
		}
	 break;

	 case 3:  	printf("\n1----> Addition");
			printf("\n2----> Subtraction");
			printf("\n3----> Multiplication");
			printf("\n4----> Division");
			printf("\nEnter the choice :");
			scanf("%d",&choice);
			switch(choice){

	   case 1: printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		do{
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			z[i]=x[i]+y[i];
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("%d + %d = %d\n",x[i],y[i],z[i]);
			i++;
		}while(i<SIZE);
	     break;
	case 2: printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		do{
			printf("\nEnter the value of x[%d]",i);
			scanf("%d",&x[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			z[i]=x[i]-y[i];
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("%d - %d = %d\n",x[i],y[i],z[i]);
			i++;
		}while(i<SIZE);
	     break;
	case 3: printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		do{
			printf("\nEnter the value of x[%d]",i);
	    scanf("%d",&x[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			z[i]=x[i]*y[i];
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("%d * %d = %d\n",x[i],y[i],z[i]);
			i++;
		}while(i<SIZE);
	     break;
	case 4: printf("\nEnter the %d value of the first array",SIZE);
		i=0;
		do{
			printf("\nEnter the value of x[%d]",i);
	    scanf("%d",&x[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("\nEnter the value of y[%d]",i);
			scanf("%d",&y[i]);
			i++;
		}while(i<SIZE);
		i=0;
		do{
			z[i]=x[i]/y[i];
			i++;
		}while(i<SIZE);
		i=0;
		do{
			printf("%d / %d = %d\n",x[i],y[i],z[i]);
			i++;
		}while(i<SIZE);
	     break;
	     }
	break;
	}
	break; //end of 1d calcy

case 2:  	for(i=0;i<SIZE;i++){
	printf("\nenter the value of array a[%d]",i);
	scanf("%d",&a[i]);
	}
	printf("\nthe unsorted array is \n");
	for(i=0;i<SIZE;i++){
	printf("%d\t",a[i]);
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE-1;j++){
			if(x[j]>x[j+1]){
				l=x[j];
				x[j]=x[j+1];
				x[j+1]=l;
					}
				     }
		}
		printf("\nthe sorted array is \n");
		for(i=0;i<SIZE;i++){
	printf("%d\t",a[i]);
	}
	break;
case 3: printf("\n1 linear");
	printf("\n 2 binary ");
	printf("enter the choice");
	scanf("%d",choice8);
	switch(choice8){
	case 1:
	for(i=0;i<SIZE;i++)
	{
	printf("\nenter the element a[%d]",i);
	scanf("%d",&x[i]);
	}
	printf("\nthe array is as follows\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\nenter the key value");
	scanf("%d",&key);
	for(i=0;i<SIZE;i++)
	{
		if(key==x[i])
			{
			 index=1;
			 break;
			}
	}
	if(index==-1)
	{
	 printf("\nsearch unsuccessful");
	}
	else
	{
	printf("\nthe key %d is at %d place",key,index+1);
	}
	break;


	case 2:   for(i=0;i<SIZE;i++){
	 printf("\nenter the value off y[%d]",i);
	 scanf("%d",&x[i]);

			}
			 printf("\nThe unsorted array is\n");
	 for(i=0;i<SIZE;i++){
			  printf("%d\t",x[i]);
			  }

	 for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE-1;j++){
			if(x[j]>x[j+1]){
				       //	c=y[f];
				       //	y[f]=y[f+1];
				     //	y[f+1]=c;




		}// if

	 }//ifor


	 }//ofor

	 printf("\nthe sorted array is\n");
	 for(i=0;i<SIZE;i++){
	 printf("%d\t",x[i]);
	 break;

	 }

	printf("\nenter the key value you want to search for = ");
	scanf("%d",&key);
	for(i=0;i<SIZE;i++)
	{
	if(key==x[i])
	{
	index=i;
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
	if(x[mid]==key){
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
				    }
				 break;




	    case 5: printf("\n27 Calculator");
		      printf("\n28 Sorting");
		      printf("\n29 Searching");
		      printf("\nEnter your choice = ");
		      scanf("%d",&choice6);
		      switch(choice6)
		      {
		      case 1:printf("\n1----> Addition");
		printf("\n2----> Subtraction");
		printf("\n3----> Multiplication");
		printf("\n4----> Division");
		printf("\nEnter the choice :");
		scanf("%d",&choice9);
		switch(choice9){
	 case 1:
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}
		}
	break;
	case 2:
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				c[i][j]=a[i][j]-b[i][j];
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("%d - %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}
		}
	break;
	case 3:
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				c[i][j]=a[i][j]*b[i][j];
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("%d * %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}
		}
	break;
	case 4:
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				c[i][j]=a[i][j]/b[i][j];
			}
		}
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("%d / %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}
		}
	break;
	}
	break;



			}//end of choice 4
			}//end of choice 3



		 getch();
		 }
		}
