#include<stdio.h>
struct electronic
{
	char name[20];
	int price, qty;	
};
main()
{
	int i;
	struct electronic e[3];
	
	for(i=0;i<=2;i++)
	{
		printf("\n\nEnter details of product %d\n\n",i+1);
		printf("Enter name, price, quantity:\n");
		scanf("%s%d%d",&e[i].name,&e[i].price,&e[i].qty);		
	}
	
	printf("name\tprice\tquantity\n\n");
	for(i=0;i<=2;i++)
	{
		printf("%s\t%d\t%d\n",e[i].name,e[i].price,e[i].qty);
	}
}

