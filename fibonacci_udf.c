#include<stdio.h>
int a=0, b=1;
int fibo(int);
main()
{
	int n;
	printf("\n Enter number:  ");
	scanf("%d",&n);
	printf("\nfibonacci series:  \n");
	printf("%d\t%d",a,b);
	fibo(n);
	
}
int fibo(int n)
{
	int c;
	
	if (n>0)
	{
		c=a+b;
		a = b;
		b = c;
		printf("\t%d",c);
		fibo(n-1);
	}
	else
	{
		return 1;
	}
	
}
