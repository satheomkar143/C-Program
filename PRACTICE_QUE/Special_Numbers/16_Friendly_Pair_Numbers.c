/* friendly numbers are two or more natural numbers with a common abundancy index,
 the ratio between the sum of divisors of a number and the number itself.
n = 6, m = 28
Divisor of 6 are 1, 2, 3, 6. =12
Divisor of 28 are 1, 2, 4, 7, 14, 28. = 56
 Abundancy index of 6 and 28 are 2. So they are friendly pair.
 */

#include<stdio.h>
void friendly(int, int);
int Divisor(int);
main()
{
	int n, m;
	printf("Enter any two numbers: ");
	scanf("%d%d",&n,&m);

	friendly(n, m);
}
void friendly(int n, int m)
{
	int n_d, m_d;
	n_d = Divisor(n);
	m_d = Divisor(m);
	if(n_d % n == m_d % m)
		printf("\n%d & %d are a Friendly Pair Numbers.",n,m);
	else
		printf("\n%d & %d are not Friendly Pair Numbers.",n,m);
}
int Divisor(int a)
{
	int i, sum=0;
	for(i=1; i<=a; i++)
	{
		if(a%i == 0)
			sum += i;
	}
	return sum;
}
