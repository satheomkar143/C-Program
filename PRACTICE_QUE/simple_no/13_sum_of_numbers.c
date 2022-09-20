#include<stdio.h>
main()
{
	int a[20], i, n, sum=0;
	printf("How many number want to store? : ");
	scanf("%d",&n);
	
	printf("\nEnter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("\ntotal sum of numbers is %d",sum);
	
}
