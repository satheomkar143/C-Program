/* Catalan numbers are a mathematical sequence that consists of positive integers, 
which can be used to find the number of possibilities of various combinations.
(2n)! / ((n + 1)!n!)
*/
#include<stdio.h>
void catalan(int);
int fact(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	catalan(n);
}
void catalan(int n)
{
	int ans;
	ans = fact(2*n) / (fact(n+1) * fact(n));
	printf("\nCatalan Number correspond to %d is %d",n,ans);
}
int fact(int n)
{
	int i;
	long long fact=1;
	for(i=2;i<=n;i++)
	{
		fact *= i;
	}
	return fact;
}
