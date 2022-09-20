#include<stdio.h>
main()
{
	int n, i, cnt=0;
	printf("\nEnter positive number: ");
	scanf("%d",&n);
	
	if(n == 0 || n == 1)
	{
		printf("\n%d is perfect square of %d",n,n);
	}
	else
	{
		for(i=2; i<= n/2; i++)
		{
			if(n == i*i)
			{
				printf("\n%d is perfect square of %d",n,i);
				cnt = 1;
				break;
			}
		}
	}
	if(cnt == 0)
		printf("%d is not perfect square",n);
}
