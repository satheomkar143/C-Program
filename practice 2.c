#include<stdio.h>
main()
{
	int n, rem, a, cub, x=0;
	printf("enter the value n= ");
	scanf("%d",&n);
	a=n;
	while(n != 0)
	{
		rem=n%10;
		cub=rem*rem*rem;
		x=x+cub;
		n=n/10;
	}
	if(a==x)
	{
		printf("armstrong");
	}
	else
	{
		printf("not a armstrong");
	}
}
