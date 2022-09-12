#include<stdio.h>
main()
{
	int a[5];
	int i, sum = 0, avg;
	printf("Enter 5 subject marks\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<=4;i++)
	{
		sum = sum + a[i];
	}
	avg = sum /5;
	printf("sum = %d",sum);
	printf("avg = %d",avg);
}
