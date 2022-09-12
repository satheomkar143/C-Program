#include<stdio.h>
main()
{
	int a[20], i, j, n, temp, count;
	printf("enter array size: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	for(i=0; i<n; i++)
	{
		count=1;
		if(a[i] != a[i-1])
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i] == a[j])
				{
					count++;
				}
			}
			printf("%d present %d times\n",a[i],count);
		}		
	}	
}
