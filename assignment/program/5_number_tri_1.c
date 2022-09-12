#include<stdio.h>
main()
{
	int n, i, j, p=1, k;
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
			if(k == 0 || k== i)
			{
				p=1;
				printf("1 ");
			}
			
			else
			{
				p = p*(i-k+1)/k;
				printf("%d ",p);
			}
				
		}
		printf("\n");
	}
}
