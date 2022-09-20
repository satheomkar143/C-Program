// Perfect numbers are the positive integers which are the sum of their proper divisors.
// 6 = 1 + 2 + 3

#include<stdio.h>
void perfect(int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	perfect(n);
}
void perfect(int n)
{
	int i, sum=0;
	
	for(i=1; i<=n/2; i++)
	{
		if(n%i == 0)
		{
			sum = sum + i;
		}
	}
	if(n == sum)
		printf("\n%d is a perfect number.",n);
	else
		printf("\n%d is not perfect number.",n);
}
