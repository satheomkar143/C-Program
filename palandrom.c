#include<stdio.h>
main()
{
	int j,n, temp, sum=0;
	printf("enter number :  ");
	scanf("%d",&n);
	temp = n;
	while (n>0)
	{
		j= n%10;
		sum = sum*10+j;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("palindrome number");
	}
	else
	{
		printf("non palindrome number");
	}
}
