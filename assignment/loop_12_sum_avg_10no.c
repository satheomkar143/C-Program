#include<stdio.h>
main()
{
	int i=0, a[10], sum=0;
	float avg;
	printf("enter ten number");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(a[i]!=0)
	{
		sum = sum + a[i];
		i++;
	}
	avg = sum / 10.0;
	printf("sum = %d, avg = %.2f",sum, avg);
}
