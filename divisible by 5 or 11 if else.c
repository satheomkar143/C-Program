#include<stdio.h>
main()
{
	int n;
	printf("\n enter n = ");
	scanf("%d",&n);
	
	if(n%5==0 || n%11==0)
	{
		printf("\n %d is divisible by 5 or 11",n);
	}
	else
	{
		printf("\n %d is not divisible by 5 or 11",n);
	}
}
