#include<stdio.h>
main()
{
	int bs,hra,ta,bonus,netsal;
	printf("enter the basic salary");
	scanf("%d",&bs);
	
	if(bs>=10000)
	{
		hra=bs*10/100;
		ta=bs*5/100;
		bonus=2400;
	}
	else
	{
		hra=bs*5/100;
		ta=1000;
		bonus=1500;
	}
	
	netsal=(bs+hra+ta+bonus);
	printf("netsal = %d",netsal);
	printf("\nbs \thra \tta \tbonus \tnetsal");
	printf("\n%d \t%d \t%d \t%d \t%d",bs,hra,ta,bonus,netsal);
}
