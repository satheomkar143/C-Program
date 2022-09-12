#include<stdio.h>
main()
{
	char a[5]={'a','b','c','d','e'};
	int i;
	for(i=0;i<=4;i++)
	{
		printf("\n a[%d] = %c",i,a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n a[%d] = %d",i,&a[i]);
	}
}
