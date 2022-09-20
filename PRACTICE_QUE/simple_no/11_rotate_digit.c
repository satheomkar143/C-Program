#include<stdio.h>
main()
{
	long int n;
	int temp, j, n1, i=0, rev=0, a[10], count=0, k, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	
	n1 = n;
	while(n!=0)
	{
		count++;
		a[i] = n%10;
		i++;
		n /= 10;
	}	
	printf("\noriginal no.: %d\n",n1);
	for(i=1;i<count;i++)
	{
		temp = a[count-1];
		printf("\n  rotation %d: ",i);
		for(j=count-1;j>0;j--)
		{
			a[j] = a[j-1];
			printf("%d",a[j]);
		}
		a[0] = temp;
		printf("%d",a[0]);
		
	}
}
