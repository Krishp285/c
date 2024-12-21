#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
#define SIZE 5
void main(){
	int a[ROW][COL],b[ROW][COL],c[ROW][COL];
	int x[SIZE],y[SIZE],z[SIZE];
	int i,choice,j,choice1,choice2;
	while(1){
	clrscr();
	printf("\n1----> Single Dimantion Array");
	printf("\n2----> Two Dimantion Array");
	printf("\n3----> Exit");
	printf("\nEnter the choice :");
	scanf("%d",&choice2);
	switch(choice2){
	  case 1: 	printf("\n1----> For loop");
			printf("\n2----> While loop");
			printf("\n3----> Do While loop");
			printf("\nEnter the choice :");
			scanf("%d",&choice1);
			switch(choice1){

	case 1:	printf("\n1----> Addition");
		printf("\n2----> Subtraction");
		printf("\n3----> Multiplication");
		printf("\n4----> Division");
		printf("\nEnter the choice :");
		scanf("%d",&choice);
		switch(choice){
	case 1:printf("\nEnter the %d value of the first array",SIZE);
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
	break;
	case 2: printf("\n1----> For loop");
		printf("\n2----> While loop");
		printf("\n3----> Do While loop");
		printf("\nEnter the choice :");
		scanf("%d",&choice1);
		switch(choice1){
	 case 1:printf("\n1----> Addition");
		printf("\n2----> Subtraction");
		printf("\n3----> Multiplication");
		printf("\n4----> Division");
		printf("\nEnter the choice :");
		scanf("%d",&choice);
		switch(choice){
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
	 case 2: printf("\n1----> Addition");
		 printf("\n2----> Subtraction");
		 printf("\n3----> Multiplication");
		 printf("\n4----> Division");
		 printf("\nEnter the choice :");
		 scanf("%d",&choice);
		 switch(choice){
	 case 1: i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				c[i][j]=a[i][j]+b[i][j];
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
	 break;
	 case 2: i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				c[i][j]=a[i][j]-b[i][j];
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("%d - %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
	 break;
	 case 3: i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				c[i][j]=a[i][j]*b[i][j];
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("%d * %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
	 break;
	 case 4: i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				c[i][j]=a[i][j]/b[i][j];
				j++;
			}
			i++;
			printf("\n");
		}
		i=0;
		while(i<ROW){
			j=0;
			while(j<COL){
				printf("%d / %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}
			i++;
			printf("\n");
		}
	 break;
	 }
	 break;
	 case 3: printf("\n1----> Addition");
		 printf("\n2----> Subtraction");
		 printf("\n3----> Multiplication");
		 printf("\n4----> Division");
		 printf("\nEnter the choice :");
		 scanf("%d",&choice);
		 switch(choice){
	   case 1:i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				c[i][j]=a[i][j]+b[i][j];
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
	   break;
	   case 2: i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				c[i][j]=a[i][j]-b[i][j];
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("%d - %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
	   break;
	   case 3:i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				c[i][j]=a[i][j]*b[i][j];
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("%d * %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
	   break;
	   case 4:i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("\nEnter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				c[i][j]=a[i][j]/b[i][j];
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
		i=0;
		do{
			j=0;
			do{
				printf("%d / %d = %d\n",a[i][j],b[i][j],c[i][j]);
				j++;
			}while(j<COL);
			i++;
			printf("\n");
		}while(i<ROW);
	   break;
	   }
	 }
	 break;
	 case 3:exit(0);
	}
	getch();
    }
}