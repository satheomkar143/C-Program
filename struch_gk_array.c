#include<stdio.h>
struct car
{
	int modelno;
	char name[20];
	float price;
};
main()
{
	struct car c[20];
	int i,n;
	printf("enter no. of records =\n");
	scanf("%d",&n);
	printf("enter model no., name of car and price");
	
	for(i=0;i<n;i++)
	{
		scanf("%d %s %f",&c[i].modelno,&c[i].name,&c[i].price);
	}
	printf("\n model no. \tname \tprice");
	for(i=0;i<n;i++)
	{
		printf("\n%d \t%s \t%.2f",c[i].modelno,c[i].name,c[i].price);
	}
}
