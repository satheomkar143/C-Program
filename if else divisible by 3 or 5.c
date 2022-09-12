#include<stdio.h>
main()
{
	int n;
	printf("enter n = ");
	scanf("%d",&n);
	
	if(n%3==0 || n%5==0)
	{
		printf("\n %d is divisible by 3 or 5",n);
	}
	else
	{
		printf("/n %d is not divisible by 3 or 5",n);
	}
}
