#include<stdio.h>
void prime();
main()
{
	prime();
}
void prime()
{
	int n, i=2, count=0;
	printf("\nEnter number:  ");
	scanf("%d",&n);	
	
	while(i<n)
	{
		if(n%i==0)
		{
			count= 1;
			break;
		}
		i++;
	}
	if(count == 1)
	{
		printf("%d is not prime number.",n);
	}
	else
	{
		printf("%d is prime number",n);
	}
}
