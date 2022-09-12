#include<stdio.h>
struct book
{
	int bid;
	char bname[20];
	float bprice;
};
main()
{
	struct book b1, b2, b3;
	printf("\nenter bid, bname, bprice\n");
	scanf("%d%s%f",&b1.bid,&b1.bname,&b1.bprice);
	scanf("%d%s%f",&b2.bid,&b2.bname,&b2.bprice);
	scanf("%d%s%f",&b3.bid,&b3.bname,&b3.bprice);
	
	printf("\n bid= %d bname = %s bprice = %f",b1.bid,b1.bname,b1.bprice);
	printf("\n bid= %d bname = %s bprice = %f",b2.bid,b2.bname,b2.bprice);
	printf("\n bid= %d bname = %s bprice = %f",b3.bid,b3.bname,b3.bprice);
}
