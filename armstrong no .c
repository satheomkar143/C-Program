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
		sum = sum+j*j*j;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("non armstrong number");
	}
}
