#include<stdio.h>
main()
{
	long int n;
	int  i=0, temp, count=0, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	
	temp = n;
	while(n!=0)
	{
		count++;
		rem = n%10;
		i++;
		n /= 10;
	}	
	printf("\nTotal %d digits present in %d\n",count,temp);
}
