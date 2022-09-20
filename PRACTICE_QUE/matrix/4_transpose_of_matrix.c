#include<stdio.h>
main()
{
	int a[3][3], i, j, b[3][3];
	printf("\nEnter 3x3 matrix element\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	printf("\nTranspose of matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
