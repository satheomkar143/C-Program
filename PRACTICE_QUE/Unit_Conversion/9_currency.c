#include<stdio.h>
main()
{
	float rs, dol;
	printf("\nEnter curreny in IND Rs: ");
	scanf("%f",&rs);
	
	dol = rs * 0.013;
	printf("\nCurrency in USD $: %f",dol);
	
	printf("\nEnter curreny in USD $: ");
	scanf("%f",&dol);
	
	rs = dol / 0.013;
	printf("\nCurrency in IND Rs: %f",rs);
	
}
