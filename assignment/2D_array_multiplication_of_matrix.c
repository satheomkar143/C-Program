#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	
	//Accept Elements from user in matrix.
	printf("enter the array A\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the array B\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	printf("multiplication of array A and array B\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=0;
			for(k=0;k<=2;k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
