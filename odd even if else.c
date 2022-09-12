#include<stdio.h>
main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	
	if(n % 2 == 0)
	{
		printf("\n%d is even number.",n);
	}
	else
	{
		printf("\n%d is odd number.",n);
	}
}
