#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("enter matrix:\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("display array\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
