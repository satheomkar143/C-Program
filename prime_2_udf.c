#include<stdio.h>
void prime(int);
main()
{
	int n;
	printf("\nEnter number:  ");
	scanf("%d",&n);
	prime(n);
}
void prime(int n)
{
	int i=2, count=0;
	
	
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
