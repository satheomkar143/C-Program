#include<stdio.h>
main()
{
	int a[3][3], b[3][3], i, j;
	printf("enter matrix A:\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			b[j][i]	= a[i][j];		
		}
	}
	
	printf("traanspose marix\n");
	
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	

}
