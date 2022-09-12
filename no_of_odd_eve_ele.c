#include<stdio.h>
main()
{
	int a[5], i, even=0, odd=0;
	printf("Enter 5 number\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("total even numbers: %d\n",even);
	printf("total odd numbers: %d\n",odd);
}

