#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3], i, j;
	printf("enter matrix A:\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter matrix B:\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("addition of matrix A and B\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
