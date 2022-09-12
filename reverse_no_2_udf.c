#include<stdio.h>
void reverse(int);
main()
{
	int n;
	printf("\nEnter number:  ");
	scanf("%d",&n);
	reverse(n);
}

void reverse(int n)
{
	int rem, rev=0;
	
	while(n>0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n = n/10; 
	}
	printf("\nreverse number: %d",rev);
}
