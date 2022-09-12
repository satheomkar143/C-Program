#include<stdio.h>
int fib(int range);
main()
{
	int a=0,b=1,c=0,n,i;
	printf("enter range = ");
	scanf("%d",&n);
	printf("fibonacci series ");
}
int fib(int range)
{
	int i,n,a,b,c;
	for(i=0 ; i<=n ; i++)
	{
		if(i<=n)
		{
			c=i;
		}
		else
		{
			c=a+b;
			a=b;
			b=c;
		}
	printf("%d",c);
	}
	return 0;
}
