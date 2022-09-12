#include<stdio.h>
struct car
{
	int modelno;
	char cname[20];
	float price;
};
main()
{
	struct car c[10];
	int i, n;
	printf("enter no of records: ");
	scanf("%d",&n);
	
	printf("enter modelno, name, price\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%f",&c[i].modelno,&c[i].cname,&c[i].price);
	}
	
	printf("\nmodelno\tname\tprice\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%f",c[i].modelno,c[i].cname,c[i].price);
	}
}
