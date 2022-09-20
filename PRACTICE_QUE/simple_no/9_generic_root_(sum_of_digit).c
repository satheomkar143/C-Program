#include<stdio.h>
main()
{
	long int n;
	int n1, i=0, j, sum=0, k, a[10], temp, count=0, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	
	n1 = n;
	while(n!=0)
	{
		count++;
		rem = n%10;
		sum += rem;
		i++;
		n /= 10;
	}	
	
	printf("\nSum of all digits in %d is %d",n1,sum);
}
