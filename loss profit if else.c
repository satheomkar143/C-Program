#include<stdio.h>
main()
{
	int sell, cost, profit;
	printf("\n enter the cost value ");
	scanf("%d",&cost);
	printf("\n enter the selling value ");
	scanf("%d",&sell);
	
	profit = sell - cost;
	
	if(sell > cost)
	{
		printf("owner is in profit with %d Rs.",profit);
	}
	else
	{
		printf("owner is in loss with %d Rs.",-profit);
	}
}
