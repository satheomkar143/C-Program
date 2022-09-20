/*  Two numbers are amicable if the first is equal to the sum of divisors of the second, 
and if the second number is equal to the sum of divisors of the first.
The smallest pair of amicable numbers is (220, 284).
The divisor of 220 are: 1,2,4,5,10,11,20,22,44,55,and 110  =284
The divisor of 284 are: 1,2,4,71,142  = 220
*/
#include<stdio.h>
void amicable(int, int);
int diviser(int);
main()
{
	int n, m;
	printf("Enter any two numbers: ");
	scanf("%d%d",&n,&m);

	amicable(n,m);
}
void amicable(int n, int m)
{
	int n_d, m_d;
	n_d = diviser(n);
	m_d = diviser(m);
	if(n == m_d && m == n_d)
		printf("\n%d & %d are amicable Number.",n,m);
	else
		printf("\n%d & %d are not amicable Number.",n,m);
}
int diviser(int n)
{
	int i, sum=0;
	for(i=1; i<=n/2; i++)
	{
		if(n%i == 0)
			sum += i;
	}
	printf("\nsum of %d divisers: %d",n,sum);
	return sum;
}
