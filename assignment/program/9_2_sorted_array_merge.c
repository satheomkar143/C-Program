#include<stdio.h>
main()
{
	int n1, n2, n3, a[20], b[20], c[40], i, j, temp;
	
	printf("Enter array size of A: ");
	scanf("%d",&n1);
	
	printf("\nEnter array elements in A:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter array size of B: ");
	scanf("%d",&n2);
	
	printf("\nEnter array elements in B:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	n3 = n1+n2;
	for(i=0,j=0;i<n3;i++)
	{
		if(i<n1)
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[j];
			j++;
		}
	}
	
	for(i=0;i<n3-1;i++)
	{
		for(j=i+1;j<n3;j++)
		{
			if(c[i]>c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	printf("\nNew sorted array:\n");
	
	for(i=0;i<n3;i++)
	{
		printf("%d\t",c[i]);
	}
	
}
