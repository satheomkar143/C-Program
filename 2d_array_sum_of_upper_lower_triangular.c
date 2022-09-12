#include<stdio.h>
main()
{
	int a[3][3], i, j, k, u_tri = 0, l_tri = 0;
	
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
			if(i < j)
			{
				u_tri = u_tri + a[i][j];
			}
			if(i > j)
			{
				l_tri = l_tri + a[i][j];
			}
		}
	}
	
	printf("sum of upper triangular = %d\n",u_tri);
	printf("sum of lower triangular = %d\n",l_tri);
}
