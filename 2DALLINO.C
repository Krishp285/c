

	printf("\nenter the value of 1ST matrix");
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
			  }
			  }
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("%d\t",a[i][j]);
			  }
			  printf("\n");
			  }



	printf("\nenter the value of 2ND matrix");
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
			  }
			  }

	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("%d\t",b[i][j]);
			  }
			  printf("\n");
			  }
	printf("\n1-->addition");
	printf("\n2-->subtrtraction");
	printf("\n3-->multiplication");
	printf("\n4-->division");
	printf("\n6-->exit");
	while(1){
	printf("\nenter the choice of array you want to print = ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		(i=0;i<ROW;i++){
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

			}
			getch();
			}