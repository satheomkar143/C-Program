#include<stdio.h>
main()
{
	int i,sum=0;
	printf("\nsum of number divisible by 5= ");
	
	for(i=10;i<=50;i=i+5)
	{
		sum = sum + i;
		
	}
	printf("%d",sum);
}
