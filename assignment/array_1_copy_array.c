#include<stdio.h>
main()
{
	int a[20], b[20], i, n;
	printf("enter array size: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
	}
	
	printf("array B:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",b[i]);
	}
	
}
