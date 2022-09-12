#include<stdio.h>
main()
{
	int a[3][3], digonal=0, n_dig=0, i, j;
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
			if(i==j)
				digonal= digonal+a[i][j];
			else
				n_dig = n_dig + a[i][j];
			
		}
	}
	
	printf("digonal sum = %d\n",digonal);
	printf("non digonal sum = %d",n_dig);

}
