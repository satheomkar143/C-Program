#include<stdio.h>
main()
{
	int j,n, sum=0;
	printf("enter number :  ");
	scanf("%d",&n);
	
	while (n>0)
	{
		j= n%10;
		sum = sum+j;
		n=n/10;
	}
	printf("Addition of digits: %d",sum);
}
