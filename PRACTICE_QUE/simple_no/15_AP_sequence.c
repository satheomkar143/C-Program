#include<stdio.h>
main()
{
	int i, n, a, diff;
	printf("\nEnter 1st value of arithmetic sequence: ");
	scanf("%d",&a);
	printf("\nEnter difference between successive numbers: ");
	scanf("%d",&diff);
	printf("\nEnter number of terms: ");
	scanf("%d",&n);
	
	printf("\nArithmetic sequence:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a+(diff*i));
	}
}
