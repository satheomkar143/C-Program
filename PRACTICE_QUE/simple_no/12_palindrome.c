#include<stdio.h>
main()
{
	int n, n1, rem, rev;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	
	n1 = n;
	while(n!=0)
	{
		rem = n%10;
		rev = rev *10 +rem;
		n /=10;
	}
	if(n1 == rev)
		printf("%d is palindrome number",n1);
	else
	printf("%d is not palindrome number",n1);
}
