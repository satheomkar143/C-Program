#include<stdio.h>
main()
{
	int a=0, b=1, c, n;
	printf("Enter range= ");
	scanf("%d",&n);
	
	printf("%d\t%d",a,b);
	
	while(n>0)
	{
		c = a+b;
		a = b;
		b = c;
		printf("\t%d",c);
		n--;
	}
	
}
