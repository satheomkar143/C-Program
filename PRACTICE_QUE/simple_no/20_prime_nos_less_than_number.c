#include<stdio.h>
main()
{
	int n, i, j, count=0;
	printf("\nEnter number: ");
	scanf("%d",&n);
	
	printf("\nprime numbers less than %d\n",n);
	
	for(j=1;j<n;j++)
	{
		count = 0;
		for(i=2;i<j;i++)
		{
			if(j%i == 0)
			{
				count = 1;
				break;
			}
		}
		if(count == 0)
			printf("%d\t",j);
	}
}
