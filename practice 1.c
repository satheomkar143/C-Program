#include<stdio.h>
main()
{
	int n, rem, rev;
	printf("enter 4 digit no. = ");
	scanf("%d",&n);
	
	rem=n%10;
	rev=rem*1000;
	n=n/10;
	rem=n%10;
	rev=rev+rem*100;
	n=n/10;
	rem=n%10;
	rev=rev+rem*10;
	n=n/10;
	rev=rev+n;
	
	printf("revere =%d",rev);
}
