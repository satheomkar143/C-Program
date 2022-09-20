#include<stdio.h>
main()
{
	long int n;
	int n1, i=0, j, k, a[10], temp, count=0, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("\nwhich largest number do you want? : ");
	scanf("%d",&k);
	
	n1 = n;
	while(n!=0)
	{
		count++;
		a[i] = n%10;
		i++;
		n /= 10;
	}	
	
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	
	printf("\n%dth largest digit in %d in %d",k,n1, a[count-k]);
}
