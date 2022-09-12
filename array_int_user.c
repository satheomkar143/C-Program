#include<stdio.h>
main()
{
	int a[5];
	int i;
	printf("Enter 5 value\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);
	}
}
