#include<stdio.h>
main()
{
	int n, i, j, count=0;
	printf("\nEnter number: ");
	scanf("%d",&n);
	
	printf("\nPrime factors of %d :\n",n);	
	for(i=1;i<=n;i++)		//check prime factors
	{
		count =0;
		if(n%i == 0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j == 0)
				{
					count = 1;
					break;
				}
			}
			if(count == 0)
				printf("%d\t",i);
		}
	}
}
