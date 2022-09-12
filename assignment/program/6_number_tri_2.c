#include<stdio.h>
main()
{
	int n, i, j, k;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			if(k%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
				
		}
		printf("\n");
	}
}
