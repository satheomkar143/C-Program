#include<stdio.h>
main()
{
	int j,n;
	printf("enter number :  ");
	scanf("%d",&n);
	printf("reverse number: ");
	while (n>0)
	{
		j= n%10;
		printf("%d",j);
		n=n/10;
	}
}
