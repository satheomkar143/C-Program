#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3], i, j, k, sum;
	
	printf("Enter 3x3 matrix A :\n");
	for (i=0;i<=2;i++)   //i<r1
	{
		for(j=0;j<=2;j++)   //j<c1
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 3x3 matrix B :\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum = 0;
			for(k=0;k<=2;k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	printf("Multiplication of matrix A and B: \n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
