#include<stdio.h>
main()
{
	int i = 1, fact=1, n;
	printf("enter number\n");
	scanf("%d",&n);
	while(i <= n)
	{
		fact = fact*i;
		i++;
	}
	printf("factorial = %d",fact);
}
