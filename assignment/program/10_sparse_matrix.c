#include<stdio.h>
main()
{
	int a[3][3], i, j, zero=0;
	printf("Enter 3x3 matrix elements:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(a[i][j] == 0)
				zero++;
		}
	}
	if(zero > 4)
		printf("\nIt is sparse matrix\n");
	else
		printf("\nIt is non sparse matrix\n");
}
