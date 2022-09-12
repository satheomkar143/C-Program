#include<stdio.h>
main()
{
	int n, a[n+1], ele, pos, i;
	printf("Enter array size= ");
	scanf("%d",&n);
	
	printf("enter array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter position of new element = ");
	scanf("%d",&pos);
	
	printf("Enter new element = ");
	scanf("%d",&ele);
	
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1] = ele;
	
	printf("array after insert new element:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
}
