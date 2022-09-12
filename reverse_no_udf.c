#include<stdio.h>
void reverse();
main()
{
	reverse();
}

void reverse()
{
	int n, rem, rev=0;
	printf("\nEnter number:  ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n = n/10; 
	}
	printf("\nreverse number: %d",rev);
}
