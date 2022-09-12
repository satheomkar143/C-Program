#include<stdio.h>
main()
{
	int a=0, b=1, c, i, n;
	printf("enter range:  ");
	scanf("%d",&n);
	printf("\nfibonacci series : \n");
	printf("%d\t%d",a,b);
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}
