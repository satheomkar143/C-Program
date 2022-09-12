#include<stdio.h>
int reverse(int n);
main()
{
	int n,reverse,rev;
	printf("enter any no. = ");
	scanf("%d",&n);
	rev = reverse(n);
	printf("\nrev=%d",rev);
	
}
int reverse(int n)
{
	int rev,rem;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return n;
}
