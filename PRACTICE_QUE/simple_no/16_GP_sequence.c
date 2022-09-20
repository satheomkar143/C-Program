#include<stdio.h>
main()
{
	int a, n, c, i;
	printf("\nEnter 1st value of geometric sequence: ");
	scanf("%d",&a);
	printf("\nEnter common factor: ");
	scanf("%d",&c);
	printf("\nEnter number of terms: ");
	scanf("%d",&n);
	
	printf("\nGeometric sequence:\n%d",a);
	for(i=1;i<n;i++)
	{
		a = a * c;
		printf("\t%d",a);
	}
}
