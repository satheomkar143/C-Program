#include<stdio.h>
main()
{
	long int n;
	int n1, i=0, rev=0, k, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	
	n1 = n;
	while(n!=0)
	{
		rem = n%10;
		rev = rev * 10 +rem;
		i++;
		n /= 10;
	}	
	
	printf("\nAfter reverse digits in %d is %d",n1,rev);
}
