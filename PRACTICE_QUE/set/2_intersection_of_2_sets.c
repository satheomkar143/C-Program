//only same elements in 2 sets
#include<stdio.h>
main()
{
	int n, m, a[20], b[20], c[20], k=0, i, j, count;
	printf("\nNo. of elements in set 1: ");
	scanf("%d",&n);
	printf("\nEnter elements of set 1:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\nNo. of elements in set 2: ");
	scanf("%d",&m);
	printf("\nEnter elements of set 2:\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		
	for(i=0;i<m;i++)
	{
		count = 0;
		for(j=0;j<n;j++)
		{
			if(b[i] == a[j])
			{
				count = 1;
			}
		}
		if(count == 1)
		{
			c[k] = b[i];
			k++;	
		}
	}
	
	printf("\nIntersection of 2 sets:\n");
	for(i=0; i<k; i++)
		printf("%d\t",c[i]);
}
