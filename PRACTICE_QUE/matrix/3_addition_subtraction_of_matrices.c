#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3], i, j;
	
	printf("\nEnter 3x3 matrix A element\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter 3x3 matrix B element\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//addition
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nAddition of matrix A & B:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	//subtraction
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\nSubtraction of matrix A & B:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
