#include<stdio.h>
main()
{
	int i,n;
	printf("\n enetr the range= ");
	scanf("%d",&n);
	printf("number is divisible by 3 and 5 is =\n");
	for(i=5;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d\t",i);
		}
	}
	
	
	
}
