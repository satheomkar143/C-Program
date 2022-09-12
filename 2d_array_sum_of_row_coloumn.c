#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[2][3], i, j, k, sum;
	
	printf("Enter 3x3 matrix A :\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	// sum of row
	for(j=0,i=0;j<=2;j++)
	{
		sum=0;
		for(k=0;k<=2;k++)
		{
			sum = sum + a[j][k];
		}
		c[i][j] = sum;
	}

	//sum of column
	
	for(j=0,i=1;j<=2;j++)
	{
		sum=0;
		for(k=0;k<=2;k++)
		{
			sum = sum + a[k][j];
		}
		c[i][j] = sum;
	}
	
	
	
	printf("sum of each row :\n");
	
	for(j=0,i=0;j<=2;j++)
	{
		printf("Row %d = %d\n",j+1,c[i][j]);
	}
		
	
	printf("sum of each column :\n");
	for(j=0, i=1;j<=2;j++)
	{
		printf("column %d = %d\n",j+1,c[i][j]);
	}
}
