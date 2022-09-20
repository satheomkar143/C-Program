#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3], i, j, dia=0, n_dia=0;
	
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
	
	printf("\nsimple multiplication of A & B:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
			printf("%d\t",c[i][j]);
			if(i == j)
			{
				if(c[i][j] == 1)
				{
					dia++;
				}
			}
			else
			{
				if(c[i][j] == 0)
				{
					n_dia++;
				}
			}
		}
		printf("\n");
	}
	if(dia == 3 && n_dia == 6)
		printf("\nMatrix A & B are orthogonal matrix\n");
	else
		printf("\nhence matrix A & B are not orthogonal matrix\n");
	
}
