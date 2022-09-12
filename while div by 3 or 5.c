#include<stdio.h>
main()
{
	int i = 3, n;
	printf("enter number\n");
	scanf("%d",&n);
	printf("number divisible by 3 or 5 =\n");
	while(i <= n)
	{
		if(i%3==0 || i%5==0)
		{
			printf("\n%d",i);
		}
		i++;
	}
	
}
