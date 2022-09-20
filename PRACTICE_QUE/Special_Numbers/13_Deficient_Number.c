/* it is a number for which the sum of proper divisors (or aliquot sum) is less than n.
For example, the proper divisors of 8 are 1, 2, and 4, and their sum is less than 8, so 8 is deficient.
*/

#include<stdio.h>
void Deficient(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	Deficient(n);
}
void Deficient(int n)
{
	int i, sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum += i;
	}
	if(n>sum)
		printf("\n%d is a Deficient number.",n);
	else
		printf("\n%d is not Deficient number.",n);
}
