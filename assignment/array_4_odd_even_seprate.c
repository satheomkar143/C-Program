#include<stdio.h>
main()
{
	int a[20], even[20], odd[20], i, j, k, n;
	printf("enter array size: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0,j=0,k=0; i<n; i++)
	{
		if(a[i]%2 == 0)
		{
			even[j] = a[i];
			j++;
		}
		else
		{
			odd[k] = a[i];
			k++;
		}		
	}
	printf("\nodd element array:\n");
	for(i=0; i<k; i++)
	{
		printf("%d\t",odd[i]);
	}
	printf("\neven element array:\n");
	for(i=0; i<j; i++)
	{
		printf("%d\t",even[i]);
	}
}
