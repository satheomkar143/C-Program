/* A neon number is a number where the sum of digits of square of the number is equal to the number. 
9 square is 9*9 = 81 and sum of the digits of the square is 9.
*/
#include<stdio.h>
void neon(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	neon(n);
}
void neon(int n)
{
	int sq, rem, sum=0;
	sq = n * n ;
	while(sq != 0)
	{
		rem = sq % 10;
		sum += rem;
		sq /= 10;
	}
	if(n == sum)
		printf("\n%d is a neon number.",n);
	else
		printf("\n%d is not neon number.",n);
}
