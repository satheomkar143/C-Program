// A-B only diff elements in set A
// B-A only diff elements in set B
#include<stdio.h>
main()
{
	int n, m, a[20], b[20], i, j, x, k=0, count, cnt;
	static int c[20];
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
	
	printf("\nDifference of 2 sets:\n");
	printf("\nA - B = ");	
	for(i=0;i<n;i++)
	{
		count = 0;
		for(j=0;j<m;j++)
		{
			if(a[i] == b[j])
			{
				count = 1;
			}
		}
		if(count == 0)
			printf("%d\t",a[i]);
	}
	
	printf("\nB - A = ");	
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
		if(count == 0)
			printf("%d\t",b[i]);
	}
}
