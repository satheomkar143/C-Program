#include<stdio.h>
main()
{
	int a[3][3], i, j, n;
	
	printf("\nEnter scalar value for multiplication: ");
	scanf("%d",&n);
	
	printf("\nEnter 3x3 matrix element\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
			a[i][j]  = a[i][j] * n;
		}
	}
	printf("\nScalar matrix :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
