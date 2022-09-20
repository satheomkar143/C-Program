#include<stdio.h>
main()
{
	long int n;
	int  i=0, temp, a[10], d, count=0, rem;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("\nEnter digit to find: ");
	scanf("%d",&d);
	
	temp = n;
	while(n!=0)
	{
		count++;
		rem = n%10;
		if(d == rem)
		{
			a[i] = count;
			i++;
		}
		n /= 10;
	}
	if(i>0)
	{
		printf("\n'%d' occures in %d at position  ",d,temp);
		while(i>0)
		{
			printf("%d\t",count - a[i-1] +1);
			i--;
		}
	}
	else
		printf("\n'%d' not occure in %d",d,temp);
	
		
}
