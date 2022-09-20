#include<stdio.h>
main()
{
	int i, n, fact=1;
	printf("\nEnter number:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		fact *= i;
	}
	printf("\nfactorial of %d : %d",n,fact);
}
