#include<stdio.h>
main()
{
	long int n;
	int  i=0, temp, a[10], d, count=0, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("\nEnter any place to see digit at this place: ");
	scanf("%d",&d);
	
	temp = n;
	while(n!=0)
	{
		count++;
		rem = n%10;
		a[i] = rem;
		i++;
		n /= 10;
	}
	if(d<=count)	
		printf("\nDigit at %d place in %d is %d\n",d,temp,a[count-d]);
	else
		printf("\nPlease enter place within range.\n");
}
