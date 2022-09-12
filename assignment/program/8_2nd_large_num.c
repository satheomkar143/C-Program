#include<stdio.h>
main()
{
	int n, a[20], i, j, temp;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	printf("\nEnter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
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
	
	printf("\nThe 2nd largest value in array is %d\n",a[n-2]);
	
}
