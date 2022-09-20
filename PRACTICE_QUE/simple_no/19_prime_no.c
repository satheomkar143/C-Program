#include<stdio.h>
main()
{
	int n, i, count=0;
	printf("\nEnter number: ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			printf("\n%d is not prime number",n);
			count = 1;
			break;
		}
	}
	if(count == 0)
		printf("\n%d is a prime number",n);
}
