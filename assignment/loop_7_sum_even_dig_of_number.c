#include<stdio.h>
main()
{
	int n,sum=0,rem;
	printf("\nenter any number= ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==0)
			sum = sum + rem;
		n=n/10;
	}
	
	printf("sum of even digit of number = %d",sum);
}
