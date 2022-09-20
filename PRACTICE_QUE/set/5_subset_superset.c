// subset - A subset B if all element of A present in B
// superset - A superset B if all element of B present in A and A has atleast one element diff

#include<stdio.h>
int subset(int, int a[20], int, int b[20]);
main()
{
	int n, m, a[20], b[20], i, s;
	printf("\nNo. of elements in set A: ");
	scanf("%d",&n);
	printf("\nEnter elements of set A:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\nNo. of elements in set B: ");
	scanf("%d",&m);
	printf("\nEnter elements of set B:\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		
	if(n>m)
	{
		s = subset(m, b, n, a);
		if(s == 1)
		{
			printf("\nset B is subset of set A");
			printf("\nset A is superset of set B");
		}
		else
		{
			printf("\nNone of both set are subset/superset of each other\n");
		}			
	}
	else if(n<m)
	{
		s = subset(n, a, m, b);
		if(s == 1)
		{
			printf("\nset A is subset of set B");
			printf("\nset B is superset of set A");
		}
		else
		{
			printf("\nNone of both set are subset/superset of each other\n");
		}
	}
	else
		printf("\nAtleast one element is more in any of set to compare subset/superset");		
}
int subset(int n, int a[20], int m, int b[20])
{
	int i, j, count = 0;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<m;j++)
		{
			if(a[i] == b[j])
			{
				count++;
				break;
			}
				
		}
	}
	if(count == n)
			return 1;
		else
			return 0;
}




