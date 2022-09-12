#include<stdio.h>
struct elec
{
	int quantity;
	char name[20];
	float price;
};
main()
{
	struct elec E[20];
	int i,n;
	printf("enter no. of records =\n");
	scanf("%d",&n);
	printf("enter quantity, name and price");
	
	for(i=0;i<n;i++)
	{
		scanf("%d %s %f",&E[i].quantity,&E[i].name,&E[i].price);
	}
	printf("\nquantity \tname \tprice");
	for(i=0;i<n;i++)
	{
		printf("\n%d \t%s \t%.2f",E[i].quantity,E[i].name,E[i].price);
	}
}
