//only same elements in 2 sets
#include<stdio.h>
main()
{
	int n, m, a[20], b[20], i, j, count=0;
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
		for(j=0;j<n;j++)
		{
			if(b[i] == a[j])
			{
				count = 1;
				break;
			}
		}
		if(count == 1)
		{
			printf("\nset 1 & set 2 are not disjoints set.\n");	
			break;
		}
	}
	
	if(count == 0)
		printf("\nset 1 & set 2 are disjoints set.\n");	
}
