#include<stdio.h>
main()
{
	int a[3][3], i, j;
	
	printf("Enter 3x3 matrix :\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i == j)
			{
				a[i][j] = 0;
			}
		}
	}
	
	printf("After replace diagonal element to zero\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
