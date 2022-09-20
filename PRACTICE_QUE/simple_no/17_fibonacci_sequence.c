#include<stdio.h>
main()
{
	int a=0, b=1, c, n, i;
	printf("\nEnter no of terms: ");
	scanf("%d",&n);
	
	printf("\nFibonacci series:\n");
	printf("%d\t%d",a,b);
	for(i=0;i<n;i++)
	{
		c = a + b;
		a = b; 
		b = c;
		printf("\t%d",c);
	}
}
