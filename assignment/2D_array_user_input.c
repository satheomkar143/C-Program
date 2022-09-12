#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,diag=0,n_diag=0;
	
	//Accept Elements from user in matrix.
	printf("enter the array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	//Display all elements in matrix form.
	printf("given array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	//Display sum of diagonal elements and non diagonal elements.
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
				diag =diag + a[i][j];
			}
			else
			{
				n_diag =n_diag + a[i][j];
			}
		}
	}
	
	printf("sum of diagonal elements is = %d\n",diag);
	printf("sum of non diagonal elements is = %d\n",n_diag);
	
	
	//Find out Transpose of Matrix.

	printf("transpose of given array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

}
