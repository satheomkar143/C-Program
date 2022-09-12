#include<stdio.h>
main()
{
	int n,sum=0,rem;
	printf("\nenter any number= ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		sum = sum + rem;
		n=n/10;
	}
	
	printf("sum of digit of number = %d",sum);
}
