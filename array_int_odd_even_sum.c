#include<stdio.h>
main()
{
	int a[5];
	int i, odd=0, even=0;
	printf("Enter 5 subject marks\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{
			even = even + a[i];
		}
		else
		{
			odd = odd + a[i];
		}
	}
	
	printf("even elements sum = %d\n",even);
	printf("odd elements sum = %d",odd);
}
