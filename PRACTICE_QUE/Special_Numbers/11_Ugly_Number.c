/* Ugly numbers are numbers whose only prime factors are 2, 3 or 5.
 For example, the first 11 ugly numbers are 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, and 15 where 1 is included by convention.
  7, 11 and 13 are not ugly numbers as their prime factors are other than 2, 3 and 5.
  */
#include<stdio.h>
void ugly(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	ugly(n);
}
void ugly(int n)
{
	if(n%2==0 || n%3==0 || n%5==0)
		printf("\n%d is a ugly number.",n);
	else
		printf("\n%d is not ugly number.",n);
}


